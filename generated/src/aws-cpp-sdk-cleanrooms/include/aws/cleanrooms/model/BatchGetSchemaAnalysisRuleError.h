/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/AnalysisRuleType.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>An error that describes why a schema could not be fetched.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/BatchGetSchemaAnalysisRuleError">AWS
   * API Reference</a></p>
   */
  class BatchGetSchemaAnalysisRuleError
  {
  public:
    AWS_CLEANROOMS_API BatchGetSchemaAnalysisRuleError();
    AWS_CLEANROOMS_API BatchGetSchemaAnalysisRuleError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API BatchGetSchemaAnalysisRuleError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An error name for the error.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>An error name for the error.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>An error name for the error.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>An error name for the error.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>An error name for the error.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>An error name for the error.</p>
     */
    inline BatchGetSchemaAnalysisRuleError& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>An error name for the error.</p>
     */
    inline BatchGetSchemaAnalysisRuleError& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>An error name for the error.</p>
     */
    inline BatchGetSchemaAnalysisRuleError& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The analysis rule type.</p>
     */
    inline const AnalysisRuleType& GetType() const{ return m_type; }

    /**
     * <p>The analysis rule type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The analysis rule type.</p>
     */
    inline void SetType(const AnalysisRuleType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The analysis rule type.</p>
     */
    inline void SetType(AnalysisRuleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The analysis rule type.</p>
     */
    inline BatchGetSchemaAnalysisRuleError& WithType(const AnalysisRuleType& value) { SetType(value); return *this;}

    /**
     * <p>The analysis rule type.</p>
     */
    inline BatchGetSchemaAnalysisRuleError& WithType(AnalysisRuleType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>An error code for the error.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>An error code for the error.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>An error code for the error.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>An error code for the error.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>An error code for the error.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>An error code for the error.</p>
     */
    inline BatchGetSchemaAnalysisRuleError& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>An error code for the error.</p>
     */
    inline BatchGetSchemaAnalysisRuleError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>An error code for the error.</p>
     */
    inline BatchGetSchemaAnalysisRuleError& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>A description of why the call failed.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of why the call failed.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of why the call failed.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of why the call failed.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of why the call failed.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of why the call failed.</p>
     */
    inline BatchGetSchemaAnalysisRuleError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of why the call failed.</p>
     */
    inline BatchGetSchemaAnalysisRuleError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of why the call failed.</p>
     */
    inline BatchGetSchemaAnalysisRuleError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AnalysisRuleType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
