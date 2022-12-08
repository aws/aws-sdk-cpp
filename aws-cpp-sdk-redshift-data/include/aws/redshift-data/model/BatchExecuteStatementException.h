/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
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
namespace RedshiftDataAPIService
{
namespace Model
{

  /**
   * <p>An SQL statement encountered an environmental error while
   * running.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/BatchExecuteStatementException">AWS
   * API Reference</a></p>
   */
  class BatchExecuteStatementException
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API BatchExecuteStatementException();
    AWS_REDSHIFTDATAAPISERVICE_API BatchExecuteStatementException(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API BatchExecuteStatementException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline BatchExecuteStatementException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline BatchExecuteStatementException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline BatchExecuteStatementException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Statement identifier of the exception.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }

    /**
     * <p>Statement identifier of the exception.</p>
     */
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }

    /**
     * <p>Statement identifier of the exception.</p>
     */
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

    /**
     * <p>Statement identifier of the exception.</p>
     */
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }

    /**
     * <p>Statement identifier of the exception.</p>
     */
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }

    /**
     * <p>Statement identifier of the exception.</p>
     */
    inline BatchExecuteStatementException& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}

    /**
     * <p>Statement identifier of the exception.</p>
     */
    inline BatchExecuteStatementException& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}

    /**
     * <p>Statement identifier of the exception.</p>
     */
    inline BatchExecuteStatementException& WithStatementId(const char* value) { SetStatementId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
