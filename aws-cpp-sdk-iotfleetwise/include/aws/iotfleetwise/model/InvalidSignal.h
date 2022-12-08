/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>A reason that a signal isn't valid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/InvalidSignal">AWS
   * API Reference</a></p>
   */
  class InvalidSignal
  {
  public:
    AWS_IOTFLEETWISE_API InvalidSignal();
    AWS_IOTFLEETWISE_API InvalidSignal(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API InvalidSignal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the signal that isn't valid.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the signal that isn't valid.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the signal that isn't valid.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the signal that isn't valid.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the signal that isn't valid.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the signal that isn't valid.</p>
     */
    inline InvalidSignal& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the signal that isn't valid.</p>
     */
    inline InvalidSignal& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the signal that isn't valid.</p>
     */
    inline InvalidSignal& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A message about why the signal isn't valid.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A message about why the signal isn't valid.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A message about why the signal isn't valid.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A message about why the signal isn't valid.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A message about why the signal isn't valid.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A message about why the signal isn't valid.</p>
     */
    inline InvalidSignal& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A message about why the signal isn't valid.</p>
     */
    inline InvalidSignal& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A message about why the signal isn't valid.</p>
     */
    inline InvalidSignal& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
