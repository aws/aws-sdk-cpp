/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/s3-encryption/handlers/DataHandler.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::Utils::Json;

namespace Aws
{
namespace S3Encryption
{
namespace Handlers
{

const Aws::String DataHandler::SerializeMap(const Aws::Map<Aws::String, Aws::String>& currentMap)
{
    JsonValue jsonMap;
    for (auto& mapItem : currentMap)
    {
        jsonMap.WithString(mapItem.first, mapItem.second);
    }
    return jsonMap.WriteCompact();
}

const Aws::Map<Aws::String, Aws::String> DataHandler::DeserializeMap(const Aws::String& jsonString)
{
    Aws::Map<Aws::String, Aws::String> materialsDescriptionMap;
    JsonValue jsonObject(jsonString);
    if (jsonObject.WasParseSuccessful())
    {
        Aws::Map<Aws::String, JsonValue> jsonMap = jsonObject.GetAllObjects();
        for (auto& mapItem : jsonMap)
        {
            materialsDescriptionMap[mapItem.first] = mapItem.second.AsString();
        }
        return materialsDescriptionMap;
    }
    else
    {
        AWS_LOGSTREAM_ERROR(MetadataHandler_Tag, "Json Parse was not successful.");
        return materialsDescriptionMap;
    }
}

}//namespace Handlers
}//namespace S3Encryption
}//namespace Aws