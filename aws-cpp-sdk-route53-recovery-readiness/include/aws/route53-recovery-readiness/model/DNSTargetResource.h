/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-readiness/model/TargetResource.h>
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
   * <p>A component for DNS/routing control readiness checks and architecture
   * checks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DNSTargetResource">AWS
   * API Reference</a></p>
   */
  class DNSTargetResource
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API DNSTargetResource();
    AWS_ROUTE53RECOVERYREADINESS_API DNSTargetResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API DNSTargetResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domain name that acts as an ingress point to a portion of the customer
     * application.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name that acts as an ingress point to a portion of the customer
     * application.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name that acts as an ingress point to a portion of the customer
     * application.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name that acts as an ingress point to a portion of the customer
     * application.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name that acts as an ingress point to a portion of the customer
     * application.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name that acts as an ingress point to a portion of the customer
     * application.</p>
     */
    inline DNSTargetResource& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name that acts as an ingress point to a portion of the customer
     * application.</p>
     */
    inline DNSTargetResource& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name that acts as an ingress point to a portion of the customer
     * application.</p>
     */
    inline DNSTargetResource& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The hosted zone Amazon Resource Name (ARN) that contains the DNS record with
     * the provided name of the target resource.</p>
     */
    inline const Aws::String& GetHostedZoneArn() const{ return m_hostedZoneArn; }

    /**
     * <p>The hosted zone Amazon Resource Name (ARN) that contains the DNS record with
     * the provided name of the target resource.</p>
     */
    inline bool HostedZoneArnHasBeenSet() const { return m_hostedZoneArnHasBeenSet; }

    /**
     * <p>The hosted zone Amazon Resource Name (ARN) that contains the DNS record with
     * the provided name of the target resource.</p>
     */
    inline void SetHostedZoneArn(const Aws::String& value) { m_hostedZoneArnHasBeenSet = true; m_hostedZoneArn = value; }

    /**
     * <p>The hosted zone Amazon Resource Name (ARN) that contains the DNS record with
     * the provided name of the target resource.</p>
     */
    inline void SetHostedZoneArn(Aws::String&& value) { m_hostedZoneArnHasBeenSet = true; m_hostedZoneArn = std::move(value); }

    /**
     * <p>The hosted zone Amazon Resource Name (ARN) that contains the DNS record with
     * the provided name of the target resource.</p>
     */
    inline void SetHostedZoneArn(const char* value) { m_hostedZoneArnHasBeenSet = true; m_hostedZoneArn.assign(value); }

    /**
     * <p>The hosted zone Amazon Resource Name (ARN) that contains the DNS record with
     * the provided name of the target resource.</p>
     */
    inline DNSTargetResource& WithHostedZoneArn(const Aws::String& value) { SetHostedZoneArn(value); return *this;}

    /**
     * <p>The hosted zone Amazon Resource Name (ARN) that contains the DNS record with
     * the provided name of the target resource.</p>
     */
    inline DNSTargetResource& WithHostedZoneArn(Aws::String&& value) { SetHostedZoneArn(std::move(value)); return *this;}

    /**
     * <p>The hosted zone Amazon Resource Name (ARN) that contains the DNS record with
     * the provided name of the target resource.</p>
     */
    inline DNSTargetResource& WithHostedZoneArn(const char* value) { SetHostedZoneArn(value); return *this;}


    /**
     * <p>The Route 53 record set ID that uniquely identifies a DNS record, given a
     * name and a type.</p>
     */
    inline const Aws::String& GetRecordSetId() const{ return m_recordSetId; }

    /**
     * <p>The Route 53 record set ID that uniquely identifies a DNS record, given a
     * name and a type.</p>
     */
    inline bool RecordSetIdHasBeenSet() const { return m_recordSetIdHasBeenSet; }

    /**
     * <p>The Route 53 record set ID that uniquely identifies a DNS record, given a
     * name and a type.</p>
     */
    inline void SetRecordSetId(const Aws::String& value) { m_recordSetIdHasBeenSet = true; m_recordSetId = value; }

    /**
     * <p>The Route 53 record set ID that uniquely identifies a DNS record, given a
     * name and a type.</p>
     */
    inline void SetRecordSetId(Aws::String&& value) { m_recordSetIdHasBeenSet = true; m_recordSetId = std::move(value); }

    /**
     * <p>The Route 53 record set ID that uniquely identifies a DNS record, given a
     * name and a type.</p>
     */
    inline void SetRecordSetId(const char* value) { m_recordSetIdHasBeenSet = true; m_recordSetId.assign(value); }

    /**
     * <p>The Route 53 record set ID that uniquely identifies a DNS record, given a
     * name and a type.</p>
     */
    inline DNSTargetResource& WithRecordSetId(const Aws::String& value) { SetRecordSetId(value); return *this;}

    /**
     * <p>The Route 53 record set ID that uniquely identifies a DNS record, given a
     * name and a type.</p>
     */
    inline DNSTargetResource& WithRecordSetId(Aws::String&& value) { SetRecordSetId(std::move(value)); return *this;}

    /**
     * <p>The Route 53 record set ID that uniquely identifies a DNS record, given a
     * name and a type.</p>
     */
    inline DNSTargetResource& WithRecordSetId(const char* value) { SetRecordSetId(value); return *this;}


    /**
     * <p>The type of DNS record of the target resource.</p>
     */
    inline const Aws::String& GetRecordType() const{ return m_recordType; }

    /**
     * <p>The type of DNS record of the target resource.</p>
     */
    inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }

    /**
     * <p>The type of DNS record of the target resource.</p>
     */
    inline void SetRecordType(const Aws::String& value) { m_recordTypeHasBeenSet = true; m_recordType = value; }

    /**
     * <p>The type of DNS record of the target resource.</p>
     */
    inline void SetRecordType(Aws::String&& value) { m_recordTypeHasBeenSet = true; m_recordType = std::move(value); }

    /**
     * <p>The type of DNS record of the target resource.</p>
     */
    inline void SetRecordType(const char* value) { m_recordTypeHasBeenSet = true; m_recordType.assign(value); }

    /**
     * <p>The type of DNS record of the target resource.</p>
     */
    inline DNSTargetResource& WithRecordType(const Aws::String& value) { SetRecordType(value); return *this;}

    /**
     * <p>The type of DNS record of the target resource.</p>
     */
    inline DNSTargetResource& WithRecordType(Aws::String&& value) { SetRecordType(std::move(value)); return *this;}

    /**
     * <p>The type of DNS record of the target resource.</p>
     */
    inline DNSTargetResource& WithRecordType(const char* value) { SetRecordType(value); return *this;}


    /**
     * <p>The target resource of the DNS target resource.</p>
     */
    inline const TargetResource& GetTargetResource() const{ return m_targetResource; }

    /**
     * <p>The target resource of the DNS target resource.</p>
     */
    inline bool TargetResourceHasBeenSet() const { return m_targetResourceHasBeenSet; }

    /**
     * <p>The target resource of the DNS target resource.</p>
     */
    inline void SetTargetResource(const TargetResource& value) { m_targetResourceHasBeenSet = true; m_targetResource = value; }

    /**
     * <p>The target resource of the DNS target resource.</p>
     */
    inline void SetTargetResource(TargetResource&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::move(value); }

    /**
     * <p>The target resource of the DNS target resource.</p>
     */
    inline DNSTargetResource& WithTargetResource(const TargetResource& value) { SetTargetResource(value); return *this;}

    /**
     * <p>The target resource of the DNS target resource.</p>
     */
    inline DNSTargetResource& WithTargetResource(TargetResource&& value) { SetTargetResource(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_hostedZoneArn;
    bool m_hostedZoneArnHasBeenSet = false;

    Aws::String m_recordSetId;
    bool m_recordSetIdHasBeenSet = false;

    Aws::String m_recordType;
    bool m_recordTypeHasBeenSet = false;

    TargetResource m_targetResource;
    bool m_targetResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
