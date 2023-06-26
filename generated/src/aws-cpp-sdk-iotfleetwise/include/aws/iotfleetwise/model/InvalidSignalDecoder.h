/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/SignalDecoderFailureReason.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>A reason that a signal decoder isn't valid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/InvalidSignalDecoder">AWS
   * API Reference</a></p>
   */
  class InvalidSignalDecoder
  {
  public:
    AWS_IOTFLEETWISE_API InvalidSignalDecoder();
    AWS_IOTFLEETWISE_API InvalidSignalDecoder(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API InvalidSignalDecoder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a signal decoder that isn't valid.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a signal decoder that isn't valid.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a signal decoder that isn't valid.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a signal decoder that isn't valid.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a signal decoder that isn't valid.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a signal decoder that isn't valid.</p>
     */
    inline InvalidSignalDecoder& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a signal decoder that isn't valid.</p>
     */
    inline InvalidSignalDecoder& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a signal decoder that isn't valid.</p>
     */
    inline InvalidSignalDecoder& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A message about why the signal decoder isn't valid.</p>
     */
    inline const SignalDecoderFailureReason& GetReason() const{ return m_reason; }

    /**
     * <p>A message about why the signal decoder isn't valid.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A message about why the signal decoder isn't valid.</p>
     */
    inline void SetReason(const SignalDecoderFailureReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A message about why the signal decoder isn't valid.</p>
     */
    inline void SetReason(SignalDecoderFailureReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A message about why the signal decoder isn't valid.</p>
     */
    inline InvalidSignalDecoder& WithReason(const SignalDecoderFailureReason& value) { SetReason(value); return *this;}

    /**
     * <p>A message about why the signal decoder isn't valid.</p>
     */
    inline InvalidSignalDecoder& WithReason(SignalDecoderFailureReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SignalDecoderFailureReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
