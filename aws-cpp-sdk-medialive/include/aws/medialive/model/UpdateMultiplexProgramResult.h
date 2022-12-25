/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateMultiplexProgramResult
  {
  public:
    AWS_MEDIALIVE_API UpdateMultiplexProgramResult();
    AWS_MEDIALIVE_API UpdateMultiplexProgramResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API UpdateMultiplexProgramResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
