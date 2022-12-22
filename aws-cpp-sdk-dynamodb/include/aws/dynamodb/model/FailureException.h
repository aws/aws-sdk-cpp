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
    AWS_DYNAMODB_API FailureException();
    AWS_DYNAMODB_API FailureException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API FailureException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Exception name.</p>
     */
    inline const Aws::String& GetExceptionName() const{ return m_exceptionName; }

    /**
     * <p>Exception name.</p>
     */
    inline bool ExceptionNameHasBeenSet() const { return m_exceptionNameHasBeenSet; }

    /**
     * <p>Exception name.</p>
     */
    inline void SetExceptionName(const Aws::String& value) { m_exceptionNameHasBeenSet = true; m_exceptionName = value; }

    /**
     * <p>Exception name.</p>
     */
    inline void SetExceptionName(Aws::String&& value) { m_exceptionNameHasBeenSet = true; m_exceptionName = std::move(value); }

    /**
     * <p>Exception name.</p>
     */
    inline void SetExceptionName(const char* value) { m_exceptionNameHasBeenSet = true; m_exceptionName.assign(value); }

    /**
     * <p>Exception name.</p>
     */
    inline FailureException& WithExceptionName(const Aws::String& value) { SetExceptionName(value); return *this;}

    /**
     * <p>Exception name.</p>
     */
    inline FailureException& WithExceptionName(Aws::String&& value) { SetExceptionName(std::move(value)); return *this;}

    /**
     * <p>Exception name.</p>
     */
    inline FailureException& WithExceptionName(const char* value) { SetExceptionName(value); return *this;}


    /**
     * <p>Description of the failure.</p>
     */
    inline const Aws::String& GetExceptionDescription() const{ return m_exceptionDescription; }

    /**
     * <p>Description of the failure.</p>
     */
    inline bool ExceptionDescriptionHasBeenSet() const { return m_exceptionDescriptionHasBeenSet; }

    /**
     * <p>Description of the failure.</p>
     */
    inline void SetExceptionDescription(const Aws::String& value) { m_exceptionDescriptionHasBeenSet = true; m_exceptionDescription = value; }

    /**
     * <p>Description of the failure.</p>
     */
    inline void SetExceptionDescription(Aws::String&& value) { m_exceptionDescriptionHasBeenSet = true; m_exceptionDescription = std::move(value); }

    /**
     * <p>Description of the failure.</p>
     */
    inline void SetExceptionDescription(const char* value) { m_exceptionDescriptionHasBeenSet = true; m_exceptionDescription.assign(value); }

    /**
     * <p>Description of the failure.</p>
     */
    inline FailureException& WithExceptionDescription(const Aws::String& value) { SetExceptionDescription(value); return *this;}

    /**
     * <p>Description of the failure.</p>
     */
    inline FailureException& WithExceptionDescription(Aws::String&& value) { SetExceptionDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the failure.</p>
     */
    inline FailureException& WithExceptionDescription(const char* value) { SetExceptionDescription(value); return *this;}

  private:

    Aws::String m_exceptionName;
    bool m_exceptionNameHasBeenSet = false;

    Aws::String m_exceptionDescription;
    bool m_exceptionDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
