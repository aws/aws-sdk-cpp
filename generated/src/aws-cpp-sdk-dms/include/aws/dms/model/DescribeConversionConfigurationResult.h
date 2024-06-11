/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class DescribeConversionConfigurationResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeConversionConfigurationResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeConversionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeConversionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) for the schema conversion project.</p>
     */
    inline const Aws::String& GetMigrationProjectIdentifier() const{ return m_migrationProjectIdentifier; }
    inline void SetMigrationProjectIdentifier(const Aws::String& value) { m_migrationProjectIdentifier = value; }
    inline void SetMigrationProjectIdentifier(Aws::String&& value) { m_migrationProjectIdentifier = std::move(value); }
    inline void SetMigrationProjectIdentifier(const char* value) { m_migrationProjectIdentifier.assign(value); }
    inline DescribeConversionConfigurationResult& WithMigrationProjectIdentifier(const Aws::String& value) { SetMigrationProjectIdentifier(value); return *this;}
    inline DescribeConversionConfigurationResult& WithMigrationProjectIdentifier(Aws::String&& value) { SetMigrationProjectIdentifier(std::move(value)); return *this;}
    inline DescribeConversionConfigurationResult& WithMigrationProjectIdentifier(const char* value) { SetMigrationProjectIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration parameters for the schema conversion project.</p>
     */
    inline const Aws::String& GetConversionConfiguration() const{ return m_conversionConfiguration; }
    inline void SetConversionConfiguration(const Aws::String& value) { m_conversionConfiguration = value; }
    inline void SetConversionConfiguration(Aws::String&& value) { m_conversionConfiguration = std::move(value); }
    inline void SetConversionConfiguration(const char* value) { m_conversionConfiguration.assign(value); }
    inline DescribeConversionConfigurationResult& WithConversionConfiguration(const Aws::String& value) { SetConversionConfiguration(value); return *this;}
    inline DescribeConversionConfigurationResult& WithConversionConfiguration(Aws::String&& value) { SetConversionConfiguration(std::move(value)); return *this;}
    inline DescribeConversionConfigurationResult& WithConversionConfiguration(const char* value) { SetConversionConfiguration(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeConversionConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeConversionConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeConversionConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_migrationProjectIdentifier;

    Aws::String m_conversionConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
