/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
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
namespace Artifact
{
namespace Model
{

  /**
   * <p>Validation exception message and name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/ValidationExceptionField">AWS
   * API Reference</a></p>
   */
  class ValidationExceptionField
  {
  public:
    AWS_ARTIFACT_API ValidationExceptionField();
    AWS_ARTIFACT_API ValidationExceptionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARTIFACT_API ValidationExceptionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Message describing why the field failed validation.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Message describing why the field failed validation.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Message describing why the field failed validation.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Message describing why the field failed validation.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Message describing why the field failed validation.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Message describing why the field failed validation.</p>
     */
    inline ValidationExceptionField& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Message describing why the field failed validation.</p>
     */
    inline ValidationExceptionField& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Message describing why the field failed validation.</p>
     */
    inline ValidationExceptionField& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Name of validation exception.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of validation exception.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of validation exception.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of validation exception.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of validation exception.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of validation exception.</p>
     */
    inline ValidationExceptionField& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of validation exception.</p>
     */
    inline ValidationExceptionField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of validation exception.</p>
     */
    inline ValidationExceptionField& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
