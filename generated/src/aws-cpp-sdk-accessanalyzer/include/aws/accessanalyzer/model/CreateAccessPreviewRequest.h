/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/accessanalyzer/model/Configuration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

  /**
   */
  class CreateAccessPreviewRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API CreateAccessPreviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccessPreview"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the account analyzer</a> used to generate the access preview. You can only
     * create an access preview for analyzers with an <code>Account</code> type and
     * <code>Active</code> status.</p>
     */
    inline const Aws::String& GetAnalyzerArn() const{ return m_analyzerArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the account analyzer</a> used to generate the access preview. You can only
     * create an access preview for analyzers with an <code>Account</code> type and
     * <code>Active</code> status.</p>
     */
    inline bool AnalyzerArnHasBeenSet() const { return m_analyzerArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the account analyzer</a> used to generate the access preview. You can only
     * create an access preview for analyzers with an <code>Account</code> type and
     * <code>Active</code> status.</p>
     */
    inline void SetAnalyzerArn(const Aws::String& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the account analyzer</a> used to generate the access preview. You can only
     * create an access preview for analyzers with an <code>Account</code> type and
     * <code>Active</code> status.</p>
     */
    inline void SetAnalyzerArn(Aws::String&& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the account analyzer</a> used to generate the access preview. You can only
     * create an access preview for analyzers with an <code>Account</code> type and
     * <code>Active</code> status.</p>
     */
    inline void SetAnalyzerArn(const char* value) { m_analyzerArnHasBeenSet = true; m_analyzerArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the account analyzer</a> used to generate the access preview. You can only
     * create an access preview for analyzers with an <code>Account</code> type and
     * <code>Active</code> status.</p>
     */
    inline CreateAccessPreviewRequest& WithAnalyzerArn(const Aws::String& value) { SetAnalyzerArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the account analyzer</a> used to generate the access preview. You can only
     * create an access preview for analyzers with an <code>Account</code> type and
     * <code>Active</code> status.</p>
     */
    inline CreateAccessPreviewRequest& WithAnalyzerArn(Aws::String&& value) { SetAnalyzerArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the account analyzer</a> used to generate the access preview. You can only
     * create an access preview for analyzers with an <code>Account</code> type and
     * <code>Active</code> status.</p>
     */
    inline CreateAccessPreviewRequest& WithAnalyzerArn(const char* value) { SetAnalyzerArn(value); return *this;}


    /**
     * <p>Access control configuration for your resource that is used to generate the
     * access preview. The access preview includes findings for external access allowed
     * to the resource with the proposed access control configuration. The
     * configuration must contain exactly one element.</p>
     */
    inline const Aws::Map<Aws::String, Configuration>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>Access control configuration for your resource that is used to generate the
     * access preview. The access preview includes findings for external access allowed
     * to the resource with the proposed access control configuration. The
     * configuration must contain exactly one element.</p>
     */
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }

    /**
     * <p>Access control configuration for your resource that is used to generate the
     * access preview. The access preview includes findings for external access allowed
     * to the resource with the proposed access control configuration. The
     * configuration must contain exactly one element.</p>
     */
    inline void SetConfigurations(const Aws::Map<Aws::String, Configuration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <p>Access control configuration for your resource that is used to generate the
     * access preview. The access preview includes findings for external access allowed
     * to the resource with the proposed access control configuration. The
     * configuration must contain exactly one element.</p>
     */
    inline void SetConfigurations(Aws::Map<Aws::String, Configuration>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }

    /**
     * <p>Access control configuration for your resource that is used to generate the
     * access preview. The access preview includes findings for external access allowed
     * to the resource with the proposed access control configuration. The
     * configuration must contain exactly one element.</p>
     */
    inline CreateAccessPreviewRequest& WithConfigurations(const Aws::Map<Aws::String, Configuration>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>Access control configuration for your resource that is used to generate the
     * access preview. The access preview includes findings for external access allowed
     * to the resource with the proposed access control configuration. The
     * configuration must contain exactly one element.</p>
     */
    inline CreateAccessPreviewRequest& WithConfigurations(Aws::Map<Aws::String, Configuration>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <p>Access control configuration for your resource that is used to generate the
     * access preview. The access preview includes findings for external access allowed
     * to the resource with the proposed access control configuration. The
     * configuration must contain exactly one element.</p>
     */
    inline CreateAccessPreviewRequest& AddConfigurations(const Aws::String& key, const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(key, value); return *this; }

    /**
     * <p>Access control configuration for your resource that is used to generate the
     * access preview. The access preview includes findings for external access allowed
     * to the resource with the proposed access control configuration. The
     * configuration must contain exactly one element.</p>
     */
    inline CreateAccessPreviewRequest& AddConfigurations(Aws::String&& key, const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(std::move(key), value); return *this; }

    /**
     * <p>Access control configuration for your resource that is used to generate the
     * access preview. The access preview includes findings for external access allowed
     * to the resource with the proposed access control configuration. The
     * configuration must contain exactly one element.</p>
     */
    inline CreateAccessPreviewRequest& AddConfigurations(const Aws::String& key, Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Access control configuration for your resource that is used to generate the
     * access preview. The access preview includes findings for external access allowed
     * to the resource with the proposed access control configuration. The
     * configuration must contain exactly one element.</p>
     */
    inline CreateAccessPreviewRequest& AddConfigurations(Aws::String&& key, Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Access control configuration for your resource that is used to generate the
     * access preview. The access preview includes findings for external access allowed
     * to the resource with the proposed access control configuration. The
     * configuration must contain exactly one element.</p>
     */
    inline CreateAccessPreviewRequest& AddConfigurations(const char* key, Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Access control configuration for your resource that is used to generate the
     * access preview. The access preview includes findings for external access allowed
     * to the resource with the proposed access control configuration. The
     * configuration must contain exactly one element.</p>
     */
    inline CreateAccessPreviewRequest& AddConfigurations(const char* key, const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(key, value); return *this; }


    /**
     * <p>A client token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A client token.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A client token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A client token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A client token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A client token.</p>
     */
    inline CreateAccessPreviewRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A client token.</p>
     */
    inline CreateAccessPreviewRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A client token.</p>
     */
    inline CreateAccessPreviewRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_analyzerArn;
    bool m_analyzerArnHasBeenSet = false;

    Aws::Map<Aws::String, Configuration> m_configurations;
    bool m_configurationsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
