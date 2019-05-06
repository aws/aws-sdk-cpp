/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/ACMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm/model/CertificateOptions.h>
#include <utility>

namespace Aws
{
namespace ACM
{
namespace Model
{

  /**
   */
  class AWS_ACM_API UpdateCertificateOptionsRequest : public ACMRequest
  {
  public:
    UpdateCertificateOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCertificateOptions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ARN of the requested certificate to update. This must be of the form:</p> <p>
     * <code>arn:aws:acm:us-east-1:<i>account</i>:certificate/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>ARN of the requested certificate to update. This must be of the form:</p> <p>
     * <code>arn:aws:acm:us-east-1:<i>account</i>:certificate/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>ARN of the requested certificate to update. This must be of the form:</p> <p>
     * <code>arn:aws:acm:us-east-1:<i>account</i>:certificate/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>ARN of the requested certificate to update. This must be of the form:</p> <p>
     * <code>arn:aws:acm:us-east-1:<i>account</i>:certificate/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>ARN of the requested certificate to update. This must be of the form:</p> <p>
     * <code>arn:aws:acm:us-east-1:<i>account</i>:certificate/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>ARN of the requested certificate to update. This must be of the form:</p> <p>
     * <code>arn:aws:acm:us-east-1:<i>account</i>:certificate/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline UpdateCertificateOptionsRequest& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>ARN of the requested certificate to update. This must be of the form:</p> <p>
     * <code>arn:aws:acm:us-east-1:<i>account</i>:certificate/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline UpdateCertificateOptionsRequest& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the requested certificate to update. This must be of the form:</p> <p>
     * <code>arn:aws:acm:us-east-1:<i>account</i>:certificate/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline UpdateCertificateOptionsRequest& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>Use to update the options for your certificate. Currently, you can specify
     * whether to add your certificate to a transparency log. Certificate transparency
     * makes it possible to detect SSL/TLS certificates that have been mistakenly or
     * maliciously issued. Certificates that have not been logged typically produce an
     * error message in a browser. </p>
     */
    inline const CertificateOptions& GetOptions() const{ return m_options; }

    /**
     * <p>Use to update the options for your certificate. Currently, you can specify
     * whether to add your certificate to a transparency log. Certificate transparency
     * makes it possible to detect SSL/TLS certificates that have been mistakenly or
     * maliciously issued. Certificates that have not been logged typically produce an
     * error message in a browser. </p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>Use to update the options for your certificate. Currently, you can specify
     * whether to add your certificate to a transparency log. Certificate transparency
     * makes it possible to detect SSL/TLS certificates that have been mistakenly or
     * maliciously issued. Certificates that have not been logged typically produce an
     * error message in a browser. </p>
     */
    inline void SetOptions(const CertificateOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Use to update the options for your certificate. Currently, you can specify
     * whether to add your certificate to a transparency log. Certificate transparency
     * makes it possible to detect SSL/TLS certificates that have been mistakenly or
     * maliciously issued. Certificates that have not been logged typically produce an
     * error message in a browser. </p>
     */
    inline void SetOptions(CertificateOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>Use to update the options for your certificate. Currently, you can specify
     * whether to add your certificate to a transparency log. Certificate transparency
     * makes it possible to detect SSL/TLS certificates that have been mistakenly or
     * maliciously issued. Certificates that have not been logged typically produce an
     * error message in a browser. </p>
     */
    inline UpdateCertificateOptionsRequest& WithOptions(const CertificateOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>Use to update the options for your certificate. Currently, you can specify
     * whether to add your certificate to a transparency log. Certificate transparency
     * makes it possible to detect SSL/TLS certificates that have been mistakenly or
     * maliciously issued. Certificates that have not been logged typically produce an
     * error message in a browser. </p>
     */
    inline UpdateCertificateOptionsRequest& WithOptions(CertificateOptions&& value) { SetOptions(std::move(value)); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    CertificateOptions m_options;
    bool m_optionsHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
