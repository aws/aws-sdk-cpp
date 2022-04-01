﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Details about what created the incident record and when it was
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/IncidentRecordSource">AWS
   * API Reference</a></p>
   */
  class AWS_SSMINCIDENTS_API IncidentRecordSource
  {
  public:
    IncidentRecordSource();
    IncidentRecordSource(Aws::Utils::Json::JsonView jsonValue);
    IncidentRecordSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The principal that started the incident.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The principal that started the incident.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The principal that started the incident.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The principal that started the incident.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The principal that started the incident.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The principal that started the incident.</p>
     */
    inline IncidentRecordSource& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The principal that started the incident.</p>
     */
    inline IncidentRecordSource& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The principal that started the incident.</p>
     */
    inline IncidentRecordSource& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The principal the assumed the role specified of the
     * <code>createdBy</code>.</p>
     */
    inline const Aws::String& GetInvokedBy() const{ return m_invokedBy; }

    /**
     * <p>The principal the assumed the role specified of the
     * <code>createdBy</code>.</p>
     */
    inline bool InvokedByHasBeenSet() const { return m_invokedByHasBeenSet; }

    /**
     * <p>The principal the assumed the role specified of the
     * <code>createdBy</code>.</p>
     */
    inline void SetInvokedBy(const Aws::String& value) { m_invokedByHasBeenSet = true; m_invokedBy = value; }

    /**
     * <p>The principal the assumed the role specified of the
     * <code>createdBy</code>.</p>
     */
    inline void SetInvokedBy(Aws::String&& value) { m_invokedByHasBeenSet = true; m_invokedBy = std::move(value); }

    /**
     * <p>The principal the assumed the role specified of the
     * <code>createdBy</code>.</p>
     */
    inline void SetInvokedBy(const char* value) { m_invokedByHasBeenSet = true; m_invokedBy.assign(value); }

    /**
     * <p>The principal the assumed the role specified of the
     * <code>createdBy</code>.</p>
     */
    inline IncidentRecordSource& WithInvokedBy(const Aws::String& value) { SetInvokedBy(value); return *this;}

    /**
     * <p>The principal the assumed the role specified of the
     * <code>createdBy</code>.</p>
     */
    inline IncidentRecordSource& WithInvokedBy(Aws::String&& value) { SetInvokedBy(std::move(value)); return *this;}

    /**
     * <p>The principal the assumed the role specified of the
     * <code>createdBy</code>.</p>
     */
    inline IncidentRecordSource& WithInvokedBy(const char* value) { SetInvokedBy(value); return *this;}


    /**
     * <p>The resource that caused the incident to be created.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The resource that caused the incident to be created.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The resource that caused the incident to be created.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The resource that caused the incident to be created.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The resource that caused the incident to be created.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The resource that caused the incident to be created.</p>
     */
    inline IncidentRecordSource& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The resource that caused the incident to be created.</p>
     */
    inline IncidentRecordSource& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The resource that caused the incident to be created.</p>
     */
    inline IncidentRecordSource& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The service that started the incident. This can be manually created from
     * Incident Manager, automatically created using an Amazon CloudWatch alarm, or
     * Amazon EventBridge event.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The service that started the incident. This can be manually created from
     * Incident Manager, automatically created using an Amazon CloudWatch alarm, or
     * Amazon EventBridge event.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The service that started the incident. This can be manually created from
     * Incident Manager, automatically created using an Amazon CloudWatch alarm, or
     * Amazon EventBridge event.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The service that started the incident. This can be manually created from
     * Incident Manager, automatically created using an Amazon CloudWatch alarm, or
     * Amazon EventBridge event.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The service that started the incident. This can be manually created from
     * Incident Manager, automatically created using an Amazon CloudWatch alarm, or
     * Amazon EventBridge event.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The service that started the incident. This can be manually created from
     * Incident Manager, automatically created using an Amazon CloudWatch alarm, or
     * Amazon EventBridge event.</p>
     */
    inline IncidentRecordSource& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The service that started the incident. This can be manually created from
     * Incident Manager, automatically created using an Amazon CloudWatch alarm, or
     * Amazon EventBridge event.</p>
     */
    inline IncidentRecordSource& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The service that started the incident. This can be manually created from
     * Incident Manager, automatically created using an Amazon CloudWatch alarm, or
     * Amazon EventBridge event.</p>
     */
    inline IncidentRecordSource& WithSource(const char* value) { SetSource(value); return *this;}

  private:

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet;

    Aws::String m_invokedBy;
    bool m_invokedByHasBeenSet;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::String m_source;
    bool m_sourceHasBeenSet;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
