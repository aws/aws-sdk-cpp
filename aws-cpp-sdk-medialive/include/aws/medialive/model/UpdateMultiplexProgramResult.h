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
#include <aws/medialive/model/MultiplexProgram.h>
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
   * Placeholder documentation for UpdateMultiplexProgramResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplexProgramResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API UpdateMultiplexProgramResult
  {
  public:
    UpdateMultiplexProgramResult();
    UpdateMultiplexProgramResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateMultiplexProgramResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The updated multiplex program.
     */
    inline const MultiplexProgram& GetMultiplexProgram() const{ return m_multiplexProgram; }

    /**
     * The updated multiplex program.
     */
    inline void SetMultiplexProgram(const MultiplexProgram& value) { m_multiplexProgram = value; }

    /**
     * The updated multiplex program.
     */
    inline void SetMultiplexProgram(MultiplexProgram&& value) { m_multiplexProgram = std::move(value); }

    /**
     * The updated multiplex program.
     */
    inline UpdateMultiplexProgramResult& WithMultiplexProgram(const MultiplexProgram& value) { SetMultiplexProgram(value); return *this;}

    /**
     * The updated multiplex program.
     */
    inline UpdateMultiplexProgramResult& WithMultiplexProgram(MultiplexProgram&& value) { SetMultiplexProgram(std::move(value)); return *this;}

  private:

    MultiplexProgram m_multiplexProgram;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
