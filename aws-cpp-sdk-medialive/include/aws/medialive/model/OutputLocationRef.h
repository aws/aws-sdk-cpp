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
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Reference to an OutputDestination ID defined in the channel<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/OutputLocationRef">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API OutputLocationRef
  {
  public:
    OutputLocationRef();
    OutputLocationRef(Aws::Utils::Json::JsonView jsonValue);
    OutputLocationRef& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetDestinationRefId() const{ return m_destinationRefId; }

    
    inline bool DestinationRefIdHasBeenSet() const { return m_destinationRefIdHasBeenSet; }

    
    inline void SetDestinationRefId(const Aws::String& value) { m_destinationRefIdHasBeenSet = true; m_destinationRefId = value; }

    
    inline void SetDestinationRefId(Aws::String&& value) { m_destinationRefIdHasBeenSet = true; m_destinationRefId = std::move(value); }

    
    inline void SetDestinationRefId(const char* value) { m_destinationRefIdHasBeenSet = true; m_destinationRefId.assign(value); }

    
    inline OutputLocationRef& WithDestinationRefId(const Aws::String& value) { SetDestinationRefId(value); return *this;}

    
    inline OutputLocationRef& WithDestinationRefId(Aws::String&& value) { SetDestinationRefId(std::move(value)); return *this;}

    
    inline OutputLocationRef& WithDestinationRefId(const char* value) { SetDestinationRefId(value); return *this;}

  private:

    Aws::String m_destinationRefId;
    bool m_destinationRefIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
