/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/InstanceFleetStateChangeReasonCode.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Provides status change reason details for the instance fleet.</p> 
   * <p>The instance fleet configuration is available only in Amazon EMR versions
   * 4.8.0 and later, excluding 5.0.x versions.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleetStateChangeReason">AWS
   * API Reference</a></p>
   */
  class InstanceFleetStateChangeReason
  {
  public:
    AWS_EMR_API InstanceFleetStateChangeReason();
    AWS_EMR_API InstanceFleetStateChangeReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceFleetStateChangeReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A code corresponding to the reason the state change occurred.</p>
     */
    inline const InstanceFleetStateChangeReasonCode& GetCode() const{ return m_code; }

    /**
     * <p>A code corresponding to the reason the state change occurred.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>A code corresponding to the reason the state change occurred.</p>
     */
    inline void SetCode(const InstanceFleetStateChangeReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>A code corresponding to the reason the state change occurred.</p>
     */
    inline void SetCode(InstanceFleetStateChangeReasonCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>A code corresponding to the reason the state change occurred.</p>
     */
    inline InstanceFleetStateChangeReason& WithCode(const InstanceFleetStateChangeReasonCode& value) { SetCode(value); return *this;}

    /**
     * <p>A code corresponding to the reason the state change occurred.</p>
     */
    inline InstanceFleetStateChangeReason& WithCode(InstanceFleetStateChangeReasonCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>An explanatory message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>An explanatory message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>An explanatory message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>An explanatory message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>An explanatory message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>An explanatory message.</p>
     */
    inline InstanceFleetStateChangeReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>An explanatory message.</p>
     */
    inline InstanceFleetStateChangeReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>An explanatory message.</p>
     */
    inline InstanceFleetStateChangeReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    InstanceFleetStateChangeReasonCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
