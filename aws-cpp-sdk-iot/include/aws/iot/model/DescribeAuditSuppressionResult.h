/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ResourceIdentifier.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoT
{
namespace Model
{
  class DescribeAuditSuppressionResult
  {
  public:
    AWS_IOT_API DescribeAuditSuppressionResult();
    AWS_IOT_API DescribeAuditSuppressionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeAuditSuppressionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetCheckName() const{ return m_checkName; }

    
    inline void SetCheckName(const Aws::String& value) { m_checkName = value; }

    
    inline void SetCheckName(Aws::String&& value) { m_checkName = std::move(value); }

    
    inline void SetCheckName(const char* value) { m_checkName.assign(value); }

    
    inline DescribeAuditSuppressionResult& WithCheckName(const Aws::String& value) { SetCheckName(value); return *this;}

    
    inline DescribeAuditSuppressionResult& WithCheckName(Aws::String&& value) { SetCheckName(std::move(value)); return *this;}

    
    inline DescribeAuditSuppressionResult& WithCheckName(const char* value) { SetCheckName(value); return *this;}


    
    inline const ResourceIdentifier& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    
    inline void SetResourceIdentifier(const ResourceIdentifier& value) { m_resourceIdentifier = value; }

    
    inline void SetResourceIdentifier(ResourceIdentifier&& value) { m_resourceIdentifier = std::move(value); }

    
    inline DescribeAuditSuppressionResult& WithResourceIdentifier(const ResourceIdentifier& value) { SetResourceIdentifier(value); return *this;}

    
    inline DescribeAuditSuppressionResult& WithResourceIdentifier(ResourceIdentifier&& value) { SetResourceIdentifier(std::move(value)); return *this;}


    /**
     * <p> The epoch timestamp in seconds at which this suppression expires. </p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p> The epoch timestamp in seconds at which this suppression expires. </p>
     */
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDate = value; }

    /**
     * <p> The epoch timestamp in seconds at which this suppression expires. </p>
     */
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDate = std::move(value); }

    /**
     * <p> The epoch timestamp in seconds at which this suppression expires. </p>
     */
    inline DescribeAuditSuppressionResult& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    /**
     * <p> The epoch timestamp in seconds at which this suppression expires. </p>
     */
    inline DescribeAuditSuppressionResult& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}


    /**
     * <p> Indicates whether a suppression should exist indefinitely or not. </p>
     */
    inline bool GetSuppressIndefinitely() const{ return m_suppressIndefinitely; }

    /**
     * <p> Indicates whether a suppression should exist indefinitely or not. </p>
     */
    inline void SetSuppressIndefinitely(bool value) { m_suppressIndefinitely = value; }

    /**
     * <p> Indicates whether a suppression should exist indefinitely or not. </p>
     */
    inline DescribeAuditSuppressionResult& WithSuppressIndefinitely(bool value) { SetSuppressIndefinitely(value); return *this;}


    /**
     * <p> The description of the audit suppression. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline DescribeAuditSuppressionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline DescribeAuditSuppressionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the audit suppression. </p>
     */
    inline DescribeAuditSuppressionResult& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_checkName;

    ResourceIdentifier m_resourceIdentifier;

    Aws::Utils::DateTime m_expirationDate;

    bool m_suppressIndefinitely;

    Aws::String m_description;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
