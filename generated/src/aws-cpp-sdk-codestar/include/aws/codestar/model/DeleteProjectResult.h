/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
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
namespace CodeStar
{
namespace Model
{
  class DeleteProjectResult
  {
  public:
    AWS_CODESTAR_API DeleteProjectResult();
    AWS_CODESTAR_API DeleteProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTAR_API DeleteProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the primary stack in AWS CloudFormation that will be deleted as
     * part of deleting the project and its resources.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The ID of the primary stack in AWS CloudFormation that will be deleted as
     * part of deleting the project and its resources.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackId = value; }

    /**
     * <p>The ID of the primary stack in AWS CloudFormation that will be deleted as
     * part of deleting the project and its resources.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackId = std::move(value); }

    /**
     * <p>The ID of the primary stack in AWS CloudFormation that will be deleted as
     * part of deleting the project and its resources.</p>
     */
    inline void SetStackId(const char* value) { m_stackId.assign(value); }

    /**
     * <p>The ID of the primary stack in AWS CloudFormation that will be deleted as
     * part of deleting the project and its resources.</p>
     */
    inline DeleteProjectResult& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The ID of the primary stack in AWS CloudFormation that will be deleted as
     * part of deleting the project and its resources.</p>
     */
    inline DeleteProjectResult& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The ID of the primary stack in AWS CloudFormation that will be deleted as
     * part of deleting the project and its resources.</p>
     */
    inline DeleteProjectResult& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the deleted project.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted project.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted project.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted project.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted project.</p>
     */
    inline DeleteProjectResult& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted project.</p>
     */
    inline DeleteProjectResult& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the deleted project.</p>
     */
    inline DeleteProjectResult& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}

  private:

    Aws::String m_stackId;

    Aws::String m_projectArn;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
