/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/LimitName.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>The request has exceeded the quotas imposed by the service.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ServiceLimitExceededException">AWS
   * API Reference</a></p>
   */
  class ServiceLimitExceededException
  {
  public:
    AWS_DATAEXCHANGE_API ServiceLimitExceededException();
    AWS_DATAEXCHANGE_API ServiceLimitExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ServiceLimitExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the limit that was reached.</p>
     */
    inline const LimitName& GetLimitName() const{ return m_limitName; }

    /**
     * <p>The name of the limit that was reached.</p>
     */
    inline bool LimitNameHasBeenSet() const { return m_limitNameHasBeenSet; }

    /**
     * <p>The name of the limit that was reached.</p>
     */
    inline void SetLimitName(const LimitName& value) { m_limitNameHasBeenSet = true; m_limitName = value; }

    /**
     * <p>The name of the limit that was reached.</p>
     */
    inline void SetLimitName(LimitName&& value) { m_limitNameHasBeenSet = true; m_limitName = std::move(value); }

    /**
     * <p>The name of the limit that was reached.</p>
     */
    inline ServiceLimitExceededException& WithLimitName(const LimitName& value) { SetLimitName(value); return *this;}

    /**
     * <p>The name of the limit that was reached.</p>
     */
    inline ServiceLimitExceededException& WithLimitName(LimitName&& value) { SetLimitName(std::move(value)); return *this;}


    /**
     * <p>The value of the exceeded limit.</p>
     */
    inline double GetLimitValue() const{ return m_limitValue; }

    /**
     * <p>The value of the exceeded limit.</p>
     */
    inline bool LimitValueHasBeenSet() const { return m_limitValueHasBeenSet; }

    /**
     * <p>The value of the exceeded limit.</p>
     */
    inline void SetLimitValue(double value) { m_limitValueHasBeenSet = true; m_limitValue = value; }

    /**
     * <p>The value of the exceeded limit.</p>
     */
    inline ServiceLimitExceededException& WithLimitValue(double value) { SetLimitValue(value); return *this;}


    /**
     * <p>The request has exceeded the quotas imposed by the service.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The request has exceeded the quotas imposed by the service.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The request has exceeded the quotas imposed by the service.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The request has exceeded the quotas imposed by the service.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The request has exceeded the quotas imposed by the service.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The request has exceeded the quotas imposed by the service.</p>
     */
    inline ServiceLimitExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The request has exceeded the quotas imposed by the service.</p>
     */
    inline ServiceLimitExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The request has exceeded the quotas imposed by the service.</p>
     */
    inline ServiceLimitExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    LimitName m_limitName;
    bool m_limitNameHasBeenSet = false;

    double m_limitValue;
    bool m_limitValueHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
