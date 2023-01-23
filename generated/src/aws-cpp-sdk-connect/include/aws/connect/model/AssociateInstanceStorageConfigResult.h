/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class AssociateInstanceStorageConfigResult
  {
  public:
    AWS_CONNECT_API AssociateInstanceStorageConfigResult();
    AWS_CONNECT_API AssociateInstanceStorageConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API AssociateInstanceStorageConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationId = value; }

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationId = std::move(value); }

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationId.assign(value); }

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline AssociateInstanceStorageConfigResult& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline AssociateInstanceStorageConfigResult& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline AssociateInstanceStorageConfigResult& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}

  private:

    Aws::String m_associationId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
