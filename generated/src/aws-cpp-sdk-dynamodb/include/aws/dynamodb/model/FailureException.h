/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents a failure a contributor insights operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/FailureException">AWS
   * API Reference</a></p>
   */
  class FailureException
  {
  public:
    AWS_DYNAMODB_API FailureException() = default;
    AWS_DYNAMODB_API FailureException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API FailureException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Exception name.</p>
     */
    inline const Aws::String& GetExceptionName() const { return m_exceptionName; }
    inline bool ExceptionNameHasBeenSet() const { return m_exceptionNameHasBeenSet; }
    template<typename ExceptionNameT = Aws::String>
    void SetExceptionName(ExceptionNameT&& value) { m_exceptionNameHasBeenSet = true; m_exceptionName = std::forward<ExceptionNameT>(value); }
    template<typename ExceptionNameT = Aws::String>
    FailureException& WithExceptionName(ExceptionNameT&& value) { SetExceptionName(std::forward<ExceptionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the failure.</p>
     */
    inline const Aws::String& GetExceptionDescription() const { return m_exceptionDescription; }
    inline bool ExceptionDescriptionHasBeenSet() const { return m_exceptionDescriptionHasBeenSet; }
    template<typename ExceptionDescriptionT = Aws::String>
    void SetExceptionDescription(ExceptionDescriptionT&& value) { m_exceptionDescriptionHasBeenSet = true; m_exceptionDescription = std::forward<ExceptionDescriptionT>(value); }
    template<typename ExceptionDescriptionT = Aws::String>
    FailureException& WithExceptionDescription(ExceptionDescriptionT&& value) { SetExceptionDescription(std::forward<ExceptionDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exceptionName;
    bool m_exceptionNameHasBeenSet = false;

    Aws::String m_exceptionDescription;
    bool m_exceptionDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
