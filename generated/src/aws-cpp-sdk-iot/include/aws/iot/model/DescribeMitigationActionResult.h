/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/MitigationActionType.h>
#include <aws/iot/model/MitigationActionParams.h>
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
  class DescribeMitigationActionResult
  {
  public:
    AWS_IOT_API DescribeMitigationActionResult();
    AWS_IOT_API DescribeMitigationActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeMitigationActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionName = value; }

    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionName = std::move(value); }

    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline void SetActionName(const char* value) { m_actionName.assign(value); }

    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline DescribeMitigationActionResult& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline DescribeMitigationActionResult& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline DescribeMitigationActionResult& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>The type of mitigation action.</p>
     */
    inline const MitigationActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>The type of mitigation action.</p>
     */
    inline void SetActionType(const MitigationActionType& value) { m_actionType = value; }

    /**
     * <p>The type of mitigation action.</p>
     */
    inline void SetActionType(MitigationActionType&& value) { m_actionType = std::move(value); }

    /**
     * <p>The type of mitigation action.</p>
     */
    inline DescribeMitigationActionResult& WithActionType(const MitigationActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>The type of mitigation action.</p>
     */
    inline DescribeMitigationActionResult& WithActionType(MitigationActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p>The ARN that identifies this migration action.</p>
     */
    inline const Aws::String& GetActionArn() const{ return m_actionArn; }

    /**
     * <p>The ARN that identifies this migration action.</p>
     */
    inline void SetActionArn(const Aws::String& value) { m_actionArn = value; }

    /**
     * <p>The ARN that identifies this migration action.</p>
     */
    inline void SetActionArn(Aws::String&& value) { m_actionArn = std::move(value); }

    /**
     * <p>The ARN that identifies this migration action.</p>
     */
    inline void SetActionArn(const char* value) { m_actionArn.assign(value); }

    /**
     * <p>The ARN that identifies this migration action.</p>
     */
    inline DescribeMitigationActionResult& WithActionArn(const Aws::String& value) { SetActionArn(value); return *this;}

    /**
     * <p>The ARN that identifies this migration action.</p>
     */
    inline DescribeMitigationActionResult& WithActionArn(Aws::String&& value) { SetActionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that identifies this migration action.</p>
     */
    inline DescribeMitigationActionResult& WithActionArn(const char* value) { SetActionArn(value); return *this;}


    /**
     * <p>A unique identifier for this action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p>A unique identifier for this action.</p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionId = value; }

    /**
     * <p>A unique identifier for this action.</p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionId = std::move(value); }

    /**
     * <p>A unique identifier for this action.</p>
     */
    inline void SetActionId(const char* value) { m_actionId.assign(value); }

    /**
     * <p>A unique identifier for this action.</p>
     */
    inline DescribeMitigationActionResult& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p>A unique identifier for this action.</p>
     */
    inline DescribeMitigationActionResult& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for this action.</p>
     */
    inline DescribeMitigationActionResult& WithActionId(const char* value) { SetActionId(value); return *this;}


    /**
     * <p>The ARN of the IAM role used to apply this action.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role used to apply this action.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role used to apply this action.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role used to apply this action.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role used to apply this action.</p>
     */
    inline DescribeMitigationActionResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role used to apply this action.</p>
     */
    inline DescribeMitigationActionResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role used to apply this action.</p>
     */
    inline DescribeMitigationActionResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Parameters that control how the mitigation action is applied, specific to the
     * type of mitigation action.</p>
     */
    inline const MitigationActionParams& GetActionParams() const{ return m_actionParams; }

    /**
     * <p>Parameters that control how the mitigation action is applied, specific to the
     * type of mitigation action.</p>
     */
    inline void SetActionParams(const MitigationActionParams& value) { m_actionParams = value; }

    /**
     * <p>Parameters that control how the mitigation action is applied, specific to the
     * type of mitigation action.</p>
     */
    inline void SetActionParams(MitigationActionParams&& value) { m_actionParams = std::move(value); }

    /**
     * <p>Parameters that control how the mitigation action is applied, specific to the
     * type of mitigation action.</p>
     */
    inline DescribeMitigationActionResult& WithActionParams(const MitigationActionParams& value) { SetActionParams(value); return *this;}

    /**
     * <p>Parameters that control how the mitigation action is applied, specific to the
     * type of mitigation action.</p>
     */
    inline DescribeMitigationActionResult& WithActionParams(MitigationActionParams&& value) { SetActionParams(std::move(value)); return *this;}


    /**
     * <p>The date and time when the mitigation action was added to your Amazon Web
     * Services accounts.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time when the mitigation action was added to your Amazon Web
     * Services accounts.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date and time when the mitigation action was added to your Amazon Web
     * Services accounts.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date and time when the mitigation action was added to your Amazon Web
     * Services accounts.</p>
     */
    inline DescribeMitigationActionResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time when the mitigation action was added to your Amazon Web
     * Services accounts.</p>
     */
    inline DescribeMitigationActionResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time when the mitigation action was last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time when the mitigation action was last changed.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p>The date and time when the mitigation action was last changed.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time when the mitigation action was last changed.</p>
     */
    inline DescribeMitigationActionResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time when the mitigation action was last changed.</p>
     */
    inline DescribeMitigationActionResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

  private:

    Aws::String m_actionName;

    MitigationActionType m_actionType;

    Aws::String m_actionArn;

    Aws::String m_actionId;

    Aws::String m_roleArn;

    MitigationActionParams m_actionParams;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
