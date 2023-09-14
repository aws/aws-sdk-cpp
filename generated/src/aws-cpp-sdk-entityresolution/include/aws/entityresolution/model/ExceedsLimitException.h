/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>The request was rejected because it attempted to create resources beyond the
   * current Entity Resolution account limits. The error message describes the limit
   * exceeded. <code>HTTP Status Code: 402</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/ExceedsLimitException">AWS
   * API Reference</a></p>
   */
  class ExceedsLimitException
  {
  public:
    AWS_ENTITYRESOLUTION_API ExceedsLimitException();
    AWS_ENTITYRESOLUTION_API ExceedsLimitException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ExceedsLimitException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ExceedsLimitException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ExceedsLimitException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ExceedsLimitException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The name of the quota that has been breached.</p>
     */
    inline const Aws::String& GetQuotaName() const{ return m_quotaName; }

    /**
     * <p>The name of the quota that has been breached.</p>
     */
    inline bool QuotaNameHasBeenSet() const { return m_quotaNameHasBeenSet; }

    /**
     * <p>The name of the quota that has been breached.</p>
     */
    inline void SetQuotaName(const Aws::String& value) { m_quotaNameHasBeenSet = true; m_quotaName = value; }

    /**
     * <p>The name of the quota that has been breached.</p>
     */
    inline void SetQuotaName(Aws::String&& value) { m_quotaNameHasBeenSet = true; m_quotaName = std::move(value); }

    /**
     * <p>The name of the quota that has been breached.</p>
     */
    inline void SetQuotaName(const char* value) { m_quotaNameHasBeenSet = true; m_quotaName.assign(value); }

    /**
     * <p>The name of the quota that has been breached.</p>
     */
    inline ExceedsLimitException& WithQuotaName(const Aws::String& value) { SetQuotaName(value); return *this;}

    /**
     * <p>The name of the quota that has been breached.</p>
     */
    inline ExceedsLimitException& WithQuotaName(Aws::String&& value) { SetQuotaName(std::move(value)); return *this;}

    /**
     * <p>The name of the quota that has been breached.</p>
     */
    inline ExceedsLimitException& WithQuotaName(const char* value) { SetQuotaName(value); return *this;}


    /**
     * <p>The current quota value for the customers.</p>
     */
    inline int GetQuotaValue() const{ return m_quotaValue; }

    /**
     * <p>The current quota value for the customers.</p>
     */
    inline bool QuotaValueHasBeenSet() const { return m_quotaValueHasBeenSet; }

    /**
     * <p>The current quota value for the customers.</p>
     */
    inline void SetQuotaValue(int value) { m_quotaValueHasBeenSet = true; m_quotaValue = value; }

    /**
     * <p>The current quota value for the customers.</p>
     */
    inline ExceedsLimitException& WithQuotaValue(int value) { SetQuotaValue(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_quotaName;
    bool m_quotaNameHasBeenSet = false;

    int m_quotaValue;
    bool m_quotaValueHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
