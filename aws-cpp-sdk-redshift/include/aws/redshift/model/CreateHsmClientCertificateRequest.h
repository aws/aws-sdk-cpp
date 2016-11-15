/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_REDSHIFT_API CreateHsmClientCertificateRequest : public RedshiftRequest
  {
  public:
    CreateHsmClientCertificateRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier to be assigned to the new HSM client certificate that the
     * cluster will use to connect to the HSM to use the database encryption keys.</p>
     */
    inline const Aws::String& GetHsmClientCertificateIdentifier() const{ return m_hsmClientCertificateIdentifier; }

    /**
     * <p>The identifier to be assigned to the new HSM client certificate that the
     * cluster will use to connect to the HSM to use the database encryption keys.</p>
     */
    inline void SetHsmClientCertificateIdentifier(const Aws::String& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = value; }

    /**
     * <p>The identifier to be assigned to the new HSM client certificate that the
     * cluster will use to connect to the HSM to use the database encryption keys.</p>
     */
    inline void SetHsmClientCertificateIdentifier(Aws::String&& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = value; }

    /**
     * <p>The identifier to be assigned to the new HSM client certificate that the
     * cluster will use to connect to the HSM to use the database encryption keys.</p>
     */
    inline void SetHsmClientCertificateIdentifier(const char* value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier.assign(value); }

    /**
     * <p>The identifier to be assigned to the new HSM client certificate that the
     * cluster will use to connect to the HSM to use the database encryption keys.</p>
     */
    inline CreateHsmClientCertificateRequest& WithHsmClientCertificateIdentifier(const Aws::String& value) { SetHsmClientCertificateIdentifier(value); return *this;}

    /**
     * <p>The identifier to be assigned to the new HSM client certificate that the
     * cluster will use to connect to the HSM to use the database encryption keys.</p>
     */
    inline CreateHsmClientCertificateRequest& WithHsmClientCertificateIdentifier(Aws::String&& value) { SetHsmClientCertificateIdentifier(value); return *this;}

    /**
     * <p>The identifier to be assigned to the new HSM client certificate that the
     * cluster will use to connect to the HSM to use the database encryption keys.</p>
     */
    inline CreateHsmClientCertificateRequest& WithHsmClientCertificateIdentifier(const char* value) { SetHsmClientCertificateIdentifier(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateHsmClientCertificateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateHsmClientCertificateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateHsmClientCertificateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateHsmClientCertificateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_hsmClientCertificateIdentifier;
    bool m_hsmClientCertificateIdentifierHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
