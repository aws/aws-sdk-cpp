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
#include <aws/medialive/model/Input.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for CreateInputResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API CreateInputResult
  {
  public:
    CreateInputResult();
    CreateInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Input& GetInput() const{ return m_input; }

    
    inline void SetInput(const Input& value) { m_input = value; }

    
    inline void SetInput(Input&& value) { m_input = std::move(value); }

    
    inline CreateInputResult& WithInput(const Input& value) { SetInput(value); return *this;}

    
    inline CreateInputResult& WithInput(Input&& value) { SetInput(std::move(value)); return *this;}

  private:

    Input m_input;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
