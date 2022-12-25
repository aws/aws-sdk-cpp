/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>The Route 53 resource that a DNS target resource record points
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/R53ResourceRecord">AWS
   * API Reference</a></p>
   */
  class R53ResourceRecord
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API R53ResourceRecord();
    AWS_ROUTE53RECOVERYREADINESS_API R53ResourceRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API R53ResourceRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DNS target domain name.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The DNS target domain name.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The DNS target domain name.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The DNS target domain name.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The DNS target domain name.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The DNS target domain name.</p>
     */
    inline R53ResourceRecord& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The DNS target domain name.</p>
     */
    inline R53ResourceRecord& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The DNS target domain name.</p>
     */
    inline R53ResourceRecord& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The Route 53 Resource Record Set ID.</p>
     */
    inline const Aws::String& GetRecordSetId() const{ return m_recordSetId; }

    /**
     * <p>The Route 53 Resource Record Set ID.</p>
     */
    inline bool RecordSetIdHasBeenSet() const { return m_recordSetIdHasBeenSet; }

    /**
     * <p>The Route 53 Resource Record Set ID.</p>
     */
    inline void SetRecordSetId(const Aws::String& value) { m_recordSetIdHasBeenSet = true; m_recordSetId = value; }

    /**
     * <p>The Route 53 Resource Record Set ID.</p>
     */
    inline void SetRecordSetId(Aws::String&& value) { m_recordSetIdHasBeenSet = true; m_recordSetId = std::move(value); }

    /**
     * <p>The Route 53 Resource Record Set ID.</p>
     */
    inline void SetRecordSetId(const char* value) { m_recordSetIdHasBeenSet = true; m_recordSetId.assign(value); }

    /**
     * <p>The Route 53 Resource Record Set ID.</p>
     */
    inline R53ResourceRecord& WithRecordSetId(const Aws::String& value) { SetRecordSetId(value); return *this;}

    /**
     * <p>The Route 53 Resource Record Set ID.</p>
     */
    inline R53ResourceRecord& WithRecordSetId(Aws::String&& value) { SetRecordSetId(std::move(value)); return *this;}

    /**
     * <p>The Route 53 Resource Record Set ID.</p>
     */
    inline R53ResourceRecord& WithRecordSetId(const char* value) { SetRecordSetId(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_recordSetId;
    bool m_recordSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
