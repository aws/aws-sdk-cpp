/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AccountCustomization.h>
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
namespace QuickSight
{
namespace Model
{
  class CreateAccountCustomizationResult
  {
  public:
    AWS_QUICKSIGHT_API CreateAccountCustomizationResult();
    AWS_QUICKSIGHT_API CreateAccountCustomizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateAccountCustomizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the customization that you created for
     * this Amazon Web Services account.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the customization that you created for
     * this Amazon Web Services account.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the customization that you created for
     * this Amazon Web Services account.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the customization that you created for
     * this Amazon Web Services account.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the customization that you created for
     * this Amazon Web Services account.</p>
     */
    inline CreateAccountCustomizationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the customization that you created for
     * this Amazon Web Services account.</p>
     */
    inline CreateAccountCustomizationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the customization that you created for
     * this Amazon Web Services account.</p>
     */
    inline CreateAccountCustomizationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountId = value; }

    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline CreateAccountCustomizationResult& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline CreateAccountCustomizationResult& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that you want to customize Amazon
     * QuickSight for.</p>
     */
    inline CreateAccountCustomizationResult& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The namespace associated with the customization you're creating. </p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace associated with the customization you're creating. </p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespace = value; }

    /**
     * <p>The namespace associated with the customization you're creating. </p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespace = std::move(value); }

    /**
     * <p>The namespace associated with the customization you're creating. </p>
     */
    inline void SetNamespace(const char* value) { m_namespace.assign(value); }

    /**
     * <p>The namespace associated with the customization you're creating. </p>
     */
    inline CreateAccountCustomizationResult& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace associated with the customization you're creating. </p>
     */
    inline CreateAccountCustomizationResult& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace associated with the customization you're creating. </p>
     */
    inline CreateAccountCustomizationResult& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The Amazon QuickSight customizations you're adding in the current Amazon Web
     * Services Region. </p>
     */
    inline const AccountCustomization& GetAccountCustomization() const{ return m_accountCustomization; }

    /**
     * <p>The Amazon QuickSight customizations you're adding in the current Amazon Web
     * Services Region. </p>
     */
    inline void SetAccountCustomization(const AccountCustomization& value) { m_accountCustomization = value; }

    /**
     * <p>The Amazon QuickSight customizations you're adding in the current Amazon Web
     * Services Region. </p>
     */
    inline void SetAccountCustomization(AccountCustomization&& value) { m_accountCustomization = std::move(value); }

    /**
     * <p>The Amazon QuickSight customizations you're adding in the current Amazon Web
     * Services Region. </p>
     */
    inline CreateAccountCustomizationResult& WithAccountCustomization(const AccountCustomization& value) { SetAccountCustomization(value); return *this;}

    /**
     * <p>The Amazon QuickSight customizations you're adding in the current Amazon Web
     * Services Region. </p>
     */
    inline CreateAccountCustomizationResult& WithAccountCustomization(AccountCustomization&& value) { SetAccountCustomization(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateAccountCustomizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateAccountCustomizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline CreateAccountCustomizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline CreateAccountCustomizationResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_awsAccountId;

    Aws::String m_namespace;

    AccountCustomization m_accountCustomization;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
