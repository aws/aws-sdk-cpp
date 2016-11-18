﻿/*
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
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon Glacier response to your request.</p>
   */
  class AWS_GLACIER_API DescribeVaultResult
  {
  public:
    DescribeVaultResult();
    DescribeVaultResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeVaultResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline const Aws::String& GetVaultARN() const{ return m_vaultARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline void SetVaultARN(const Aws::String& value) { m_vaultARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline void SetVaultARN(Aws::String&& value) { m_vaultARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline void SetVaultARN(const char* value) { m_vaultARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline DescribeVaultResult& WithVaultARN(const Aws::String& value) { SetVaultARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline DescribeVaultResult& WithVaultARN(Aws::String&& value) { SetVaultARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline DescribeVaultResult& WithVaultARN(const char* value) { SetVaultARN(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const Aws::String& value) { m_vaultName = value; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(Aws::String&& value) { m_vaultName = value; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const char* value) { m_vaultName.assign(value); }

    /**
     * <p>The name of the vault.</p>
     */
    inline DescribeVaultResult& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline DescribeVaultResult& WithVaultName(Aws::String&& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline DescribeVaultResult& WithVaultName(const char* value) { SetVaultName(value); return *this;}

    /**
     * <p>The UTC date when the vault was created. A string representation of ISO 8601
     * date format, for example, "2012-03-20T17:03:43.221Z".</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The UTC date when the vault was created. A string representation of ISO 8601
     * date format, for example, "2012-03-20T17:03:43.221Z".</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDate = value; }

    /**
     * <p>The UTC date when the vault was created. A string representation of ISO 8601
     * date format, for example, "2012-03-20T17:03:43.221Z".</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDate = value; }

    /**
     * <p>The UTC date when the vault was created. A string representation of ISO 8601
     * date format, for example, "2012-03-20T17:03:43.221Z".</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDate.assign(value); }

    /**
     * <p>The UTC date when the vault was created. A string representation of ISO 8601
     * date format, for example, "2012-03-20T17:03:43.221Z".</p>
     */
    inline DescribeVaultResult& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The UTC date when the vault was created. A string representation of ISO 8601
     * date format, for example, "2012-03-20T17:03:43.221Z".</p>
     */
    inline DescribeVaultResult& WithCreationDate(Aws::String&& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The UTC date when the vault was created. A string representation of ISO 8601
     * date format, for example, "2012-03-20T17:03:43.221Z".</p>
     */
    inline DescribeVaultResult& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}

    /**
     * <p>The UTC date when Amazon Glacier completed the last vault inventory. A string
     * representation of ISO 8601 date format, for example,
     * "2012-03-20T17:03:43.221Z".</p>
     */
    inline const Aws::String& GetLastInventoryDate() const{ return m_lastInventoryDate; }

    /**
     * <p>The UTC date when Amazon Glacier completed the last vault inventory. A string
     * representation of ISO 8601 date format, for example,
     * "2012-03-20T17:03:43.221Z".</p>
     */
    inline void SetLastInventoryDate(const Aws::String& value) { m_lastInventoryDate = value; }

    /**
     * <p>The UTC date when Amazon Glacier completed the last vault inventory. A string
     * representation of ISO 8601 date format, for example,
     * "2012-03-20T17:03:43.221Z".</p>
     */
    inline void SetLastInventoryDate(Aws::String&& value) { m_lastInventoryDate = value; }

    /**
     * <p>The UTC date when Amazon Glacier completed the last vault inventory. A string
     * representation of ISO 8601 date format, for example,
     * "2012-03-20T17:03:43.221Z".</p>
     */
    inline void SetLastInventoryDate(const char* value) { m_lastInventoryDate.assign(value); }

    /**
     * <p>The UTC date when Amazon Glacier completed the last vault inventory. A string
     * representation of ISO 8601 date format, for example,
     * "2012-03-20T17:03:43.221Z".</p>
     */
    inline DescribeVaultResult& WithLastInventoryDate(const Aws::String& value) { SetLastInventoryDate(value); return *this;}

    /**
     * <p>The UTC date when Amazon Glacier completed the last vault inventory. A string
     * representation of ISO 8601 date format, for example,
     * "2012-03-20T17:03:43.221Z".</p>
     */
    inline DescribeVaultResult& WithLastInventoryDate(Aws::String&& value) { SetLastInventoryDate(value); return *this;}

    /**
     * <p>The UTC date when Amazon Glacier completed the last vault inventory. A string
     * representation of ISO 8601 date format, for example,
     * "2012-03-20T17:03:43.221Z".</p>
     */
    inline DescribeVaultResult& WithLastInventoryDate(const char* value) { SetLastInventoryDate(value); return *this;}

    /**
     * <p>The number of archives in the vault as of the last inventory date. This field
     * will return <code>null</code> if an inventory has not yet run on the vault, for
     * example, if you just created the vault.</p>
     */
    inline long long GetNumberOfArchives() const{ return m_numberOfArchives; }

    /**
     * <p>The number of archives in the vault as of the last inventory date. This field
     * will return <code>null</code> if an inventory has not yet run on the vault, for
     * example, if you just created the vault.</p>
     */
    inline void SetNumberOfArchives(long long value) { m_numberOfArchives = value; }

    /**
     * <p>The number of archives in the vault as of the last inventory date. This field
     * will return <code>null</code> if an inventory has not yet run on the vault, for
     * example, if you just created the vault.</p>
     */
    inline DescribeVaultResult& WithNumberOfArchives(long long value) { SetNumberOfArchives(value); return *this;}

    /**
     * <p>Total size, in bytes, of the archives in the vault as of the last inventory
     * date. This field will return null if an inventory has not yet run on the vault,
     * for example, if you just created the vault.</p>
     */
    inline long long GetSizeInBytes() const{ return m_sizeInBytes; }

    /**
     * <p>Total size, in bytes, of the archives in the vault as of the last inventory
     * date. This field will return null if an inventory has not yet run on the vault,
     * for example, if you just created the vault.</p>
     */
    inline void SetSizeInBytes(long long value) { m_sizeInBytes = value; }

    /**
     * <p>Total size, in bytes, of the archives in the vault as of the last inventory
     * date. This field will return null if an inventory has not yet run on the vault,
     * for example, if you just created the vault.</p>
     */
    inline DescribeVaultResult& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}

  private:
    Aws::String m_vaultARN;
    Aws::String m_vaultName;
    Aws::String m_creationDate;
    Aws::String m_lastInventoryDate;
    long long m_numberOfArchives;
    long long m_sizeInBytes;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
