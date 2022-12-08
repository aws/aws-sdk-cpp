/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TemplateErrorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/Entity.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>List of errors that occurred when the template version creation
   * failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TemplateError">AWS
   * API Reference</a></p>
   */
  class TemplateError
  {
  public:
    AWS_QUICKSIGHT_API TemplateError();
    AWS_QUICKSIGHT_API TemplateError(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TemplateError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Type of error.</p>
     */
    inline const TemplateErrorType& GetType() const{ return m_type; }

    /**
     * <p>Type of error.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type of error.</p>
     */
    inline void SetType(const TemplateErrorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of error.</p>
     */
    inline void SetType(TemplateErrorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of error.</p>
     */
    inline TemplateError& WithType(const TemplateErrorType& value) { SetType(value); return *this;}

    /**
     * <p>Type of error.</p>
     */
    inline TemplateError& WithType(TemplateErrorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Description of the error type.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Description of the error type.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Description of the error type.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Description of the error type.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Description of the error type.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Description of the error type.</p>
     */
    inline TemplateError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Description of the error type.</p>
     */
    inline TemplateError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Description of the error type.</p>
     */
    inline TemplateError& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<Entity>& GetViolatedEntities() const{ return m_violatedEntities; }

    /**
     * <p/>
     */
    inline bool ViolatedEntitiesHasBeenSet() const { return m_violatedEntitiesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetViolatedEntities(const Aws::Vector<Entity>& value) { m_violatedEntitiesHasBeenSet = true; m_violatedEntities = value; }

    /**
     * <p/>
     */
    inline void SetViolatedEntities(Aws::Vector<Entity>&& value) { m_violatedEntitiesHasBeenSet = true; m_violatedEntities = std::move(value); }

    /**
     * <p/>
     */
    inline TemplateError& WithViolatedEntities(const Aws::Vector<Entity>& value) { SetViolatedEntities(value); return *this;}

    /**
     * <p/>
     */
    inline TemplateError& WithViolatedEntities(Aws::Vector<Entity>&& value) { SetViolatedEntities(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline TemplateError& AddViolatedEntities(const Entity& value) { m_violatedEntitiesHasBeenSet = true; m_violatedEntities.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline TemplateError& AddViolatedEntities(Entity&& value) { m_violatedEntitiesHasBeenSet = true; m_violatedEntities.push_back(std::move(value)); return *this; }

  private:

    TemplateErrorType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Entity> m_violatedEntities;
    bool m_violatedEntitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
