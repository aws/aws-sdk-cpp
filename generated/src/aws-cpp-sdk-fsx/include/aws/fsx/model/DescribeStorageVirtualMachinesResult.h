/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/StorageVirtualMachine.h>
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
namespace FSx
{
namespace Model
{
  class DescribeStorageVirtualMachinesResult
  {
  public:
    AWS_FSX_API DescribeStorageVirtualMachinesResult();
    AWS_FSX_API DescribeStorageVirtualMachinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeStorageVirtualMachinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returned after a successful <code>DescribeStorageVirtualMachines</code>
     * operation, describing each SVM.</p>
     */
    inline const Aws::Vector<StorageVirtualMachine>& GetStorageVirtualMachines() const{ return m_storageVirtualMachines; }

    /**
     * <p>Returned after a successful <code>DescribeStorageVirtualMachines</code>
     * operation, describing each SVM.</p>
     */
    inline void SetStorageVirtualMachines(const Aws::Vector<StorageVirtualMachine>& value) { m_storageVirtualMachines = value; }

    /**
     * <p>Returned after a successful <code>DescribeStorageVirtualMachines</code>
     * operation, describing each SVM.</p>
     */
    inline void SetStorageVirtualMachines(Aws::Vector<StorageVirtualMachine>&& value) { m_storageVirtualMachines = std::move(value); }

    /**
     * <p>Returned after a successful <code>DescribeStorageVirtualMachines</code>
     * operation, describing each SVM.</p>
     */
    inline DescribeStorageVirtualMachinesResult& WithStorageVirtualMachines(const Aws::Vector<StorageVirtualMachine>& value) { SetStorageVirtualMachines(value); return *this;}

    /**
     * <p>Returned after a successful <code>DescribeStorageVirtualMachines</code>
     * operation, describing each SVM.</p>
     */
    inline DescribeStorageVirtualMachinesResult& WithStorageVirtualMachines(Aws::Vector<StorageVirtualMachine>&& value) { SetStorageVirtualMachines(std::move(value)); return *this;}

    /**
     * <p>Returned after a successful <code>DescribeStorageVirtualMachines</code>
     * operation, describing each SVM.</p>
     */
    inline DescribeStorageVirtualMachinesResult& AddStorageVirtualMachines(const StorageVirtualMachine& value) { m_storageVirtualMachines.push_back(value); return *this; }

    /**
     * <p>Returned after a successful <code>DescribeStorageVirtualMachines</code>
     * operation, describing each SVM.</p>
     */
    inline DescribeStorageVirtualMachinesResult& AddStorageVirtualMachines(StorageVirtualMachine&& value) { m_storageVirtualMachines.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeStorageVirtualMachinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeStorageVirtualMachinesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeStorageVirtualMachinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<StorageVirtualMachine> m_storageVirtualMachines;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
