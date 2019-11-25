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
   * Placeholder documentation for CreateMultiplexProgramResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplexProgramResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API CreateMultiplexProgramResult
  {
  public:
    CreateMultiplexProgramResult();
    CreateMultiplexProgramResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateMultiplexProgramResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The newly created multiplex program.
     */
    inline const MultiplexProgram& GetMultiplexProgram() const{ return m_multiplexProgram; }

    /**
     * The newly created multiplex program.
     */
    inline void SetMultiplexProgram(const MultiplexProgram& value) { m_multiplexProgram = value; }

    /**
     * The newly created multiplex program.
     */
    inline void SetMultiplexProgram(MultiplexProgram&& value) { m_multiplexProgram = std::move(value); }

    /**
     * The newly created multiplex program.
     */
    inline CreateMultiplexProgramResult& WithMultiplexProgram(const MultiplexProgram& value) { SetMultiplexProgram(value); return *this;}

    /**
     * The newly created multiplex program.
     */
    inline CreateMultiplexProgramResult& WithMultiplexProgram(MultiplexProgram&& value) { SetMultiplexProgram(std::move(value)); return *this;}

  private:

    MultiplexProgram m_multiplexProgram;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
