/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>Information that identifies a mitigation action. This information is returned
   * by ListMitigationActions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/MitigationActionIdentifier">AWS
   * API Reference</a></p>
   */
  class MitigationActionIdentifier
  {
  public:
    AWS_IOT_API MitigationActionIdentifier();
    AWS_IOT_API MitigationActionIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MitigationActionIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The friendly name of the mitigation action.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The friendly name of the mitigation action.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The friendly name of the mitigation action.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The friendly name of the mitigation action.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The friendly name of the mitigation action.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The friendly name of the mitigation action.</p>
     */
    inline MitigationActionIdentifier& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The friendly name of the mitigation action.</p>
     */
    inline MitigationActionIdentifier& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the mitigation action.</p>
     */
    inline MitigationActionIdentifier& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline const Aws::String& GetActionArn() const{ return m_actionArn; }

    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline bool ActionArnHasBeenSet() const { return m_actionArnHasBeenSet; }

    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline void SetActionArn(const Aws::String& value) { m_actionArnHasBeenSet = true; m_actionArn = value; }

    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline void SetActionArn(Aws::String&& value) { m_actionArnHasBeenSet = true; m_actionArn = std::move(value); }

    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline void SetActionArn(const char* value) { m_actionArnHasBeenSet = true; m_actionArn.assign(value); }

    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline MitigationActionIdentifier& WithActionArn(const Aws::String& value) { SetActionArn(value); return *this;}

    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline MitigationActionIdentifier& WithActionArn(Aws::String&& value) { SetActionArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline MitigationActionIdentifier& WithActionArn(const char* value) { SetActionArn(value); return *this;}


    /**
     * <p>The date when this mitigation action was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date when this mitigation action was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date when this mitigation action was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date when this mitigation action was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date when this mitigation action was created.</p>
     */
    inline MitigationActionIdentifier& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date when this mitigation action was created.</p>
     */
    inline MitigationActionIdentifier& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    Aws::String m_actionArn;
    bool m_actionArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
