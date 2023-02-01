/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/FailedItem.h>
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
namespace FMS
{
namespace Model
{
  class BatchDisassociateResourceResult
  {
  public:
    AWS_FMS_API BatchDisassociateResourceResult();
    AWS_FMS_API BatchDisassociateResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API BatchDisassociateResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the resource set, used in a TODO to refer to the
     * resource set.</p>
     */
    inline const Aws::String& GetResourceSetIdentifier() const{ return m_resourceSetIdentifier; }

    /**
     * <p>A unique identifier for the resource set, used in a TODO to refer to the
     * resource set.</p>
     */
    inline void SetResourceSetIdentifier(const Aws::String& value) { m_resourceSetIdentifier = value; }

    /**
     * <p>A unique identifier for the resource set, used in a TODO to refer to the
     * resource set.</p>
     */
    inline void SetResourceSetIdentifier(Aws::String&& value) { m_resourceSetIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the resource set, used in a TODO to refer to the
     * resource set.</p>
     */
    inline void SetResourceSetIdentifier(const char* value) { m_resourceSetIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the resource set, used in a TODO to refer to the
     * resource set.</p>
     */
    inline BatchDisassociateResourceResult& WithResourceSetIdentifier(const Aws::String& value) { SetResourceSetIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the resource set, used in a TODO to refer to the
     * resource set.</p>
     */
    inline BatchDisassociateResourceResult& WithResourceSetIdentifier(Aws::String&& value) { SetResourceSetIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the resource set, used in a TODO to refer to the
     * resource set.</p>
     */
    inline BatchDisassociateResourceResult& WithResourceSetIdentifier(const char* value) { SetResourceSetIdentifier(value); return *this;}


    /**
     * <p>The resources that failed to disassociate from the resource set.</p>
     */
    inline const Aws::Vector<FailedItem>& GetFailedItems() const{ return m_failedItems; }

    /**
     * <p>The resources that failed to disassociate from the resource set.</p>
     */
    inline void SetFailedItems(const Aws::Vector<FailedItem>& value) { m_failedItems = value; }

    /**
     * <p>The resources that failed to disassociate from the resource set.</p>
     */
    inline void SetFailedItems(Aws::Vector<FailedItem>&& value) { m_failedItems = std::move(value); }

    /**
     * <p>The resources that failed to disassociate from the resource set.</p>
     */
    inline BatchDisassociateResourceResult& WithFailedItems(const Aws::Vector<FailedItem>& value) { SetFailedItems(value); return *this;}

    /**
     * <p>The resources that failed to disassociate from the resource set.</p>
     */
    inline BatchDisassociateResourceResult& WithFailedItems(Aws::Vector<FailedItem>&& value) { SetFailedItems(std::move(value)); return *this;}

    /**
     * <p>The resources that failed to disassociate from the resource set.</p>
     */
    inline BatchDisassociateResourceResult& AddFailedItems(const FailedItem& value) { m_failedItems.push_back(value); return *this; }

    /**
     * <p>The resources that failed to disassociate from the resource set.</p>
     */
    inline BatchDisassociateResourceResult& AddFailedItems(FailedItem&& value) { m_failedItems.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceSetIdentifier;

    Aws::Vector<FailedItem> m_failedItems;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
