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
   * The Route 53 resource a DNS Target Resource record points to<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/R53ResourceRecord">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API R53ResourceRecord
  {
  public:
    R53ResourceRecord();
    R53ResourceRecord(Aws::Utils::Json::JsonView jsonValue);
    R53ResourceRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The DNS target name
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * The DNS target name
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * The DNS target name
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The DNS target name
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * The DNS target name
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * The DNS target name
     */
    inline R53ResourceRecord& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The DNS target name
     */
    inline R53ResourceRecord& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * The DNS target name
     */
    inline R53ResourceRecord& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * The Resource Record set id
     */
    inline const Aws::String& GetRecordSetId() const{ return m_recordSetId; }

    /**
     * The Resource Record set id
     */
    inline bool RecordSetIdHasBeenSet() const { return m_recordSetIdHasBeenSet; }

    /**
     * The Resource Record set id
     */
    inline void SetRecordSetId(const Aws::String& value) { m_recordSetIdHasBeenSet = true; m_recordSetId = value; }

    /**
     * The Resource Record set id
     */
    inline void SetRecordSetId(Aws::String&& value) { m_recordSetIdHasBeenSet = true; m_recordSetId = std::move(value); }

    /**
     * The Resource Record set id
     */
    inline void SetRecordSetId(const char* value) { m_recordSetIdHasBeenSet = true; m_recordSetId.assign(value); }

    /**
     * The Resource Record set id
     */
    inline R53ResourceRecord& WithRecordSetId(const Aws::String& value) { SetRecordSetId(value); return *this;}

    /**
     * The Resource Record set id
     */
    inline R53ResourceRecord& WithRecordSetId(Aws::String&& value) { SetRecordSetId(std::move(value)); return *this;}

    /**
     * The Resource Record set id
     */
    inline R53ResourceRecord& WithRecordSetId(const char* value) { SetRecordSetId(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_recordSetId;
    bool m_recordSetIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
