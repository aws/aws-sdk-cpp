/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Request denied because service quota has been exceeded.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ServiceQuotaExceededException">AWS
   * API Reference</a></p>
   */
  class ServiceQuotaExceededException
  {
  public:
    AWS_CLEANROOMS_API ServiceQuotaExceededException();
    AWS_CLEANROOMS_API ServiceQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ServiceQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ServiceQuotaExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ServiceQuotaExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ServiceQuotaExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The name of the quota.</p>
     */
    inline const Aws::String& GetQuotaName() const{ return m_quotaName; }

    /**
     * <p>The name of the quota.</p>
     */
    inline bool QuotaNameHasBeenSet() const { return m_quotaNameHasBeenSet; }

    /**
     * <p>The name of the quota.</p>
     */
    inline void SetQuotaName(const Aws::String& value) { m_quotaNameHasBeenSet = true; m_quotaName = value; }

    /**
     * <p>The name of the quota.</p>
     */
    inline void SetQuotaName(Aws::String&& value) { m_quotaNameHasBeenSet = true; m_quotaName = std::move(value); }

    /**
     * <p>The name of the quota.</p>
     */
    inline void SetQuotaName(const char* value) { m_quotaNameHasBeenSet = true; m_quotaName.assign(value); }

    /**
     * <p>The name of the quota.</p>
     */
    inline ServiceQuotaExceededException& WithQuotaName(const Aws::String& value) { SetQuotaName(value); return *this;}

    /**
     * <p>The name of the quota.</p>
     */
    inline ServiceQuotaExceededException& WithQuotaName(Aws::String&& value) { SetQuotaName(std::move(value)); return *this;}

    /**
     * <p>The name of the quota.</p>
     */
    inline ServiceQuotaExceededException& WithQuotaName(const char* value) { SetQuotaName(value); return *this;}


    /**
     * <p>The value of the quota.</p>
     */
    inline double GetQuotaValue() const{ return m_quotaValue; }

    /**
     * <p>The value of the quota.</p>
     */
    inline bool QuotaValueHasBeenSet() const { return m_quotaValueHasBeenSet; }

    /**
     * <p>The value of the quota.</p>
     */
    inline void SetQuotaValue(double value) { m_quotaValueHasBeenSet = true; m_quotaValue = value; }

    /**
     * <p>The value of the quota.</p>
     */
    inline ServiceQuotaExceededException& WithQuotaValue(double value) { SetQuotaValue(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_quotaName;
    bool m_quotaNameHasBeenSet = false;

    double m_quotaValue;
    bool m_quotaValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
