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
  class CreateUserHierarchyGroupResult
  {
  public:
    AWS_CONNECT_API CreateUserHierarchyGroupResult();
    AWS_CONNECT_API CreateUserHierarchyGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateUserHierarchyGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline const Aws::String& GetHierarchyGroupId() const{ return m_hierarchyGroupId; }

    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline void SetHierarchyGroupId(const Aws::String& value) { m_hierarchyGroupId = value; }

    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline void SetHierarchyGroupId(Aws::String&& value) { m_hierarchyGroupId = std::move(value); }

    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline void SetHierarchyGroupId(const char* value) { m_hierarchyGroupId.assign(value); }

    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline CreateUserHierarchyGroupResult& WithHierarchyGroupId(const Aws::String& value) { SetHierarchyGroupId(value); return *this;}

    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline CreateUserHierarchyGroupResult& WithHierarchyGroupId(Aws::String&& value) { SetHierarchyGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline CreateUserHierarchyGroupResult& WithHierarchyGroupId(const char* value) { SetHierarchyGroupId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group. </p>
     */
    inline const Aws::String& GetHierarchyGroupArn() const{ return m_hierarchyGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group. </p>
     */
    inline void SetHierarchyGroupArn(const Aws::String& value) { m_hierarchyGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group. </p>
     */
    inline void SetHierarchyGroupArn(Aws::String&& value) { m_hierarchyGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group. </p>
     */
    inline void SetHierarchyGroupArn(const char* value) { m_hierarchyGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group. </p>
     */
    inline CreateUserHierarchyGroupResult& WithHierarchyGroupArn(const Aws::String& value) { SetHierarchyGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group. </p>
     */
    inline CreateUserHierarchyGroupResult& WithHierarchyGroupArn(Aws::String&& value) { SetHierarchyGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group. </p>
     */
    inline CreateUserHierarchyGroupResult& WithHierarchyGroupArn(const char* value) { SetHierarchyGroupArn(value); return *this;}

  private:

    Aws::String m_hierarchyGroupId;

    Aws::String m_hierarchyGroupArn;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
