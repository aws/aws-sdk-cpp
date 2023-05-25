/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> The metadata of a list. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/AllowDenyList">AWS
   * API Reference</a></p>
   */
  class AllowDenyList
  {
  public:
    AWS_FRAUDDETECTOR_API AllowDenyList();
    AWS_FRAUDDETECTOR_API AllowDenyList(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API AllowDenyList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the list. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the list. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the list. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the list. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the list. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the list. </p>
     */
    inline AllowDenyList& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the list. </p>
     */
    inline AllowDenyList& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the list. </p>
     */
    inline AllowDenyList& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the list. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the list. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the list. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the list. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the list. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the list. </p>
     */
    inline AllowDenyList& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the list. </p>
     */
    inline AllowDenyList& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the list. </p>
     */
    inline AllowDenyList& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The variable type of the list. </p>
     */
    inline const Aws::String& GetVariableType() const{ return m_variableType; }

    /**
     * <p> The variable type of the list. </p>
     */
    inline bool VariableTypeHasBeenSet() const { return m_variableTypeHasBeenSet; }

    /**
     * <p> The variable type of the list. </p>
     */
    inline void SetVariableType(const Aws::String& value) { m_variableTypeHasBeenSet = true; m_variableType = value; }

    /**
     * <p> The variable type of the list. </p>
     */
    inline void SetVariableType(Aws::String&& value) { m_variableTypeHasBeenSet = true; m_variableType = std::move(value); }

    /**
     * <p> The variable type of the list. </p>
     */
    inline void SetVariableType(const char* value) { m_variableTypeHasBeenSet = true; m_variableType.assign(value); }

    /**
     * <p> The variable type of the list. </p>
     */
    inline AllowDenyList& WithVariableType(const Aws::String& value) { SetVariableType(value); return *this;}

    /**
     * <p> The variable type of the list. </p>
     */
    inline AllowDenyList& WithVariableType(Aws::String&& value) { SetVariableType(std::move(value)); return *this;}

    /**
     * <p> The variable type of the list. </p>
     */
    inline AllowDenyList& WithVariableType(const char* value) { SetVariableType(value); return *this;}


    /**
     * <p> The time the list was created. </p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p> The time the list was created. </p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p> The time the list was created. </p>
     */
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p> The time the list was created. </p>
     */
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p> The time the list was created. </p>
     */
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }

    /**
     * <p> The time the list was created. </p>
     */
    inline AllowDenyList& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p> The time the list was created. </p>
     */
    inline AllowDenyList& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p> The time the list was created. </p>
     */
    inline AllowDenyList& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}


    /**
     * <p> The time the list was last updated. </p>
     */
    inline const Aws::String& GetUpdatedTime() const{ return m_updatedTime; }

    /**
     * <p> The time the list was last updated. </p>
     */
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }

    /**
     * <p> The time the list was last updated. </p>
     */
    inline void SetUpdatedTime(const Aws::String& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = value; }

    /**
     * <p> The time the list was last updated. </p>
     */
    inline void SetUpdatedTime(Aws::String&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::move(value); }

    /**
     * <p> The time the list was last updated. </p>
     */
    inline void SetUpdatedTime(const char* value) { m_updatedTimeHasBeenSet = true; m_updatedTime.assign(value); }

    /**
     * <p> The time the list was last updated. </p>
     */
    inline AllowDenyList& WithUpdatedTime(const Aws::String& value) { SetUpdatedTime(value); return *this;}

    /**
     * <p> The time the list was last updated. </p>
     */
    inline AllowDenyList& WithUpdatedTime(Aws::String&& value) { SetUpdatedTime(std::move(value)); return *this;}

    /**
     * <p> The time the list was last updated. </p>
     */
    inline AllowDenyList& WithUpdatedTime(const char* value) { SetUpdatedTime(value); return *this;}


    /**
     * <p> The ARN of the list. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The ARN of the list. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The ARN of the list. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The ARN of the list. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The ARN of the list. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The ARN of the list. </p>
     */
    inline AllowDenyList& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The ARN of the list. </p>
     */
    inline AllowDenyList& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the list. </p>
     */
    inline AllowDenyList& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_variableType;
    bool m_variableTypeHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_updatedTime;
    bool m_updatedTimeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
