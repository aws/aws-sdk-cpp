/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class DisassociateCustomDomainRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API DisassociateCustomDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateCustomDomain"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * disassociate a custom domain name from.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * disassociate a custom domain name from.</p>
     */
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * disassociate a custom domain name from.</p>
     */
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * disassociate a custom domain name from.</p>
     */
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * disassociate a custom domain name from.</p>
     */
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * disassociate a custom domain name from.</p>
     */
    inline DisassociateCustomDomainRequest& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * disassociate a custom domain name from.</p>
     */
    inline DisassociateCustomDomainRequest& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * disassociate a custom domain name from.</p>
     */
    inline DisassociateCustomDomainRequest& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}


    /**
     * <p>The domain name that you want to disassociate from the App Runner
     * service.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name that you want to disassociate from the App Runner
     * service.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name that you want to disassociate from the App Runner
     * service.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name that you want to disassociate from the App Runner
     * service.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name that you want to disassociate from the App Runner
     * service.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name that you want to disassociate from the App Runner
     * service.</p>
     */
    inline DisassociateCustomDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name that you want to disassociate from the App Runner
     * service.</p>
     */
    inline DisassociateCustomDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name that you want to disassociate from the App Runner
     * service.</p>
     */
    inline DisassociateCustomDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
