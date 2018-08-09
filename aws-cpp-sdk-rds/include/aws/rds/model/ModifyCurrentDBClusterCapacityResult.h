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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class AWS_RDS_API ModifyCurrentDBClusterCapacityResult
  {
  public:
    ModifyCurrentDBClusterCapacityResult();
    ModifyCurrentDBClusterCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyCurrentDBClusterCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A user-supplied DB cluster identifier. This identifier is the unique key that
     * identifies a DB cluster. </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>A user-supplied DB cluster identifier. This identifier is the unique key that
     * identifies a DB cluster. </p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifier = value; }

    /**
     * <p>A user-supplied DB cluster identifier. This identifier is the unique key that
     * identifies a DB cluster. </p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>A user-supplied DB cluster identifier. This identifier is the unique key that
     * identifies a DB cluster. </p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifier.assign(value); }

    /**
     * <p>A user-supplied DB cluster identifier. This identifier is the unique key that
     * identifies a DB cluster. </p>
     */
    inline ModifyCurrentDBClusterCapacityResult& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>A user-supplied DB cluster identifier. This identifier is the unique key that
     * identifies a DB cluster. </p>
     */
    inline ModifyCurrentDBClusterCapacityResult& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>A user-supplied DB cluster identifier. This identifier is the unique key that
     * identifies a DB cluster. </p>
     */
    inline ModifyCurrentDBClusterCapacityResult& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>A value that specifies the capacity that the DB cluster scales to next.</p>
     */
    inline int GetPendingCapacity() const{ return m_pendingCapacity; }

    /**
     * <p>A value that specifies the capacity that the DB cluster scales to next.</p>
     */
    inline void SetPendingCapacity(int value) { m_pendingCapacity = value; }

    /**
     * <p>A value that specifies the capacity that the DB cluster scales to next.</p>
     */
    inline ModifyCurrentDBClusterCapacityResult& WithPendingCapacity(int value) { SetPendingCapacity(value); return *this;}


    /**
     * <p>The current capacity of the DB cluster.</p>
     */
    inline int GetCurrentCapacity() const{ return m_currentCapacity; }

    /**
     * <p>The current capacity of the DB cluster.</p>
     */
    inline void SetCurrentCapacity(int value) { m_currentCapacity = value; }

    /**
     * <p>The current capacity of the DB cluster.</p>
     */
    inline ModifyCurrentDBClusterCapacityResult& WithCurrentCapacity(int value) { SetCurrentCapacity(value); return *this;}


    /**
     * <p>The number of seconds before a call to
     * <code>ModifyCurrentDBClusterCapacity</code> times out.</p>
     */
    inline int GetSecondsBeforeTimeout() const{ return m_secondsBeforeTimeout; }

    /**
     * <p>The number of seconds before a call to
     * <code>ModifyCurrentDBClusterCapacity</code> times out.</p>
     */
    inline void SetSecondsBeforeTimeout(int value) { m_secondsBeforeTimeout = value; }

    /**
     * <p>The number of seconds before a call to
     * <code>ModifyCurrentDBClusterCapacity</code> times out.</p>
     */
    inline ModifyCurrentDBClusterCapacityResult& WithSecondsBeforeTimeout(int value) { SetSecondsBeforeTimeout(value); return *this;}


    /**
     * <p>The timeout action of a call to <code>ModifyCurrentDBClusterCapacity</code>,
     * either <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p>
     */
    inline const Aws::String& GetTimeoutAction() const{ return m_timeoutAction; }

    /**
     * <p>The timeout action of a call to <code>ModifyCurrentDBClusterCapacity</code>,
     * either <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p>
     */
    inline void SetTimeoutAction(const Aws::String& value) { m_timeoutAction = value; }

    /**
     * <p>The timeout action of a call to <code>ModifyCurrentDBClusterCapacity</code>,
     * either <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p>
     */
    inline void SetTimeoutAction(Aws::String&& value) { m_timeoutAction = std::move(value); }

    /**
     * <p>The timeout action of a call to <code>ModifyCurrentDBClusterCapacity</code>,
     * either <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p>
     */
    inline void SetTimeoutAction(const char* value) { m_timeoutAction.assign(value); }

    /**
     * <p>The timeout action of a call to <code>ModifyCurrentDBClusterCapacity</code>,
     * either <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p>
     */
    inline ModifyCurrentDBClusterCapacityResult& WithTimeoutAction(const Aws::String& value) { SetTimeoutAction(value); return *this;}

    /**
     * <p>The timeout action of a call to <code>ModifyCurrentDBClusterCapacity</code>,
     * either <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p>
     */
    inline ModifyCurrentDBClusterCapacityResult& WithTimeoutAction(Aws::String&& value) { SetTimeoutAction(std::move(value)); return *this;}

    /**
     * <p>The timeout action of a call to <code>ModifyCurrentDBClusterCapacity</code>,
     * either <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p>
     */
    inline ModifyCurrentDBClusterCapacityResult& WithTimeoutAction(const char* value) { SetTimeoutAction(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyCurrentDBClusterCapacityResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyCurrentDBClusterCapacityResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;

    int m_pendingCapacity;

    int m_currentCapacity;

    int m_secondsBeforeTimeout;

    Aws::String m_timeoutAction;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
