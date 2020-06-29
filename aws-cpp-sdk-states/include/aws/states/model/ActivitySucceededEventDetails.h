/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about an activity that successfully terminated during an
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ActivitySucceededEventDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SFN_API ActivitySucceededEventDetails
  {
  public:
    ActivitySucceededEventDetails();
    ActivitySucceededEventDetails(Aws::Utils::Json::JsonView jsonValue);
    ActivitySucceededEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The JSON data output by the activity task.</p>
     */
    inline const Aws::String& GetOutput() const{ return m_output; }

    /**
     * <p>The JSON data output by the activity task.</p>
     */
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }

    /**
     * <p>The JSON data output by the activity task.</p>
     */
    inline void SetOutput(const Aws::String& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>The JSON data output by the activity task.</p>
     */
    inline void SetOutput(Aws::String&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

    /**
     * <p>The JSON data output by the activity task.</p>
     */
    inline void SetOutput(const char* value) { m_outputHasBeenSet = true; m_output.assign(value); }

    /**
     * <p>The JSON data output by the activity task.</p>
     */
    inline ActivitySucceededEventDetails& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}

    /**
     * <p>The JSON data output by the activity task.</p>
     */
    inline ActivitySucceededEventDetails& WithOutput(Aws::String&& value) { SetOutput(std::move(value)); return *this;}

    /**
     * <p>The JSON data output by the activity task.</p>
     */
    inline ActivitySucceededEventDetails& WithOutput(const char* value) { SetOutput(value); return *this;}

  private:

    Aws::String m_output;
    bool m_outputHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
