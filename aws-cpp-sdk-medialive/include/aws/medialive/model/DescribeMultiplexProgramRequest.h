/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for DescribeMultiplexProgramRequest<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplexProgramRequest">AWS
   * API Reference</a></p>
   */
  class DescribeMultiplexProgramRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API DescribeMultiplexProgramRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMultiplexProgram"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    /**
     * The ID of the multiplex that the program belongs to.
     */
    inline const Aws::String& GetMultiplexId() const{ return m_multiplexId; }

    /**
     * The ID of the multiplex that the program belongs to.
     */
    inline bool MultiplexIdHasBeenSet() const { return m_multiplexIdHasBeenSet; }

    /**
     * The ID of the multiplex that the program belongs to.
     */
    inline void SetMultiplexId(const Aws::String& value) { m_multiplexIdHasBeenSet = true; m_multiplexId = value; }

    /**
     * The ID of the multiplex that the program belongs to.
     */
    inline void SetMultiplexId(Aws::String&& value) { m_multiplexIdHasBeenSet = true; m_multiplexId = std::move(value); }

    /**
     * The ID of the multiplex that the program belongs to.
     */
    inline void SetMultiplexId(const char* value) { m_multiplexIdHasBeenSet = true; m_multiplexId.assign(value); }

    /**
     * The ID of the multiplex that the program belongs to.
     */
    inline DescribeMultiplexProgramRequest& WithMultiplexId(const Aws::String& value) { SetMultiplexId(value); return *this;}

    /**
     * The ID of the multiplex that the program belongs to.
     */
    inline DescribeMultiplexProgramRequest& WithMultiplexId(Aws::String&& value) { SetMultiplexId(std::move(value)); return *this;}

    /**
     * The ID of the multiplex that the program belongs to.
     */
    inline DescribeMultiplexProgramRequest& WithMultiplexId(const char* value) { SetMultiplexId(value); return *this;}


    /**
     * The name of the program.
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }

    /**
     * The name of the program.
     */
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }

    /**
     * The name of the program.
     */
    inline void SetProgramName(const Aws::String& value) { m_programNameHasBeenSet = true; m_programName = value; }

    /**
     * The name of the program.
     */
    inline void SetProgramName(Aws::String&& value) { m_programNameHasBeenSet = true; m_programName = std::move(value); }

    /**
     * The name of the program.
     */
    inline void SetProgramName(const char* value) { m_programNameHasBeenSet = true; m_programName.assign(value); }

    /**
     * The name of the program.
     */
    inline DescribeMultiplexProgramRequest& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}

    /**
     * The name of the program.
     */
    inline DescribeMultiplexProgramRequest& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}

    /**
     * The name of the program.
     */
    inline DescribeMultiplexProgramRequest& WithProgramName(const char* value) { SetProgramName(value); return *this;}

  private:

    Aws::String m_multiplexId;
    bool m_multiplexIdHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
