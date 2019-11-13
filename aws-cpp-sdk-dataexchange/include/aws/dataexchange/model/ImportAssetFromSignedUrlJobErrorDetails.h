/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataExchange
{
namespace Model
{

  class AWS_DATAEXCHANGE_API ImportAssetFromSignedUrlJobErrorDetails
  {
  public:
    ImportAssetFromSignedUrlJobErrorDetails();
    ImportAssetFromSignedUrlJobErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    ImportAssetFromSignedUrlJobErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAssetName() const{ return m_assetName; }

    
    inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }

    
    inline void SetAssetName(const Aws::String& value) { m_assetNameHasBeenSet = true; m_assetName = value; }

    
    inline void SetAssetName(Aws::String&& value) { m_assetNameHasBeenSet = true; m_assetName = std::move(value); }

    
    inline void SetAssetName(const char* value) { m_assetNameHasBeenSet = true; m_assetName.assign(value); }

    
    inline ImportAssetFromSignedUrlJobErrorDetails& WithAssetName(const Aws::String& value) { SetAssetName(value); return *this;}

    
    inline ImportAssetFromSignedUrlJobErrorDetails& WithAssetName(Aws::String&& value) { SetAssetName(std::move(value)); return *this;}

    
    inline ImportAssetFromSignedUrlJobErrorDetails& WithAssetName(const char* value) { SetAssetName(value); return *this;}

  private:

    Aws::String m_assetName;
    bool m_assetNameHasBeenSet;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
