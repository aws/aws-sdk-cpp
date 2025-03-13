/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/BatchWriteExceptionType.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>A <code>BatchWrite</code> exception has occurred.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchWriteException">AWS
   * API Reference</a></p>
   */
  class BatchWriteException
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchWriteException() = default;
    AWS_CLOUDDIRECTORY_API BatchWriteException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchWriteException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline int GetIndex() const { return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }
    inline BatchWriteException& WithIndex(int value) { SetIndex(value); return *this;}
    ///@}

    ///@{
    
    inline BatchWriteExceptionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(BatchWriteExceptionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline BatchWriteException& WithType(BatchWriteExceptionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BatchWriteException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    int m_index{0};
    bool m_indexHasBeenSet = false;

    BatchWriteExceptionType m_type{BatchWriteExceptionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
