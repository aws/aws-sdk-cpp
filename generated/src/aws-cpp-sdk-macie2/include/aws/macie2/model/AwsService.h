/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about an Amazon Web Service that performed an action on
   * an affected resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AwsService">AWS
   * API Reference</a></p>
   */
  class AwsService
  {
  public:
    AWS_MACIE2_API AwsService() = default;
    AWS_MACIE2_API AwsService(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API AwsService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon Web Service that performed the action.</p>
     */
    inline const Aws::String& GetInvokedBy() const { return m_invokedBy; }
    inline bool InvokedByHasBeenSet() const { return m_invokedByHasBeenSet; }
    template<typename InvokedByT = Aws::String>
    void SetInvokedBy(InvokedByT&& value) { m_invokedByHasBeenSet = true; m_invokedBy = std::forward<InvokedByT>(value); }
    template<typename InvokedByT = Aws::String>
    AwsService& WithInvokedBy(InvokedByT&& value) { SetInvokedBy(std::forward<InvokedByT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_invokedBy;
    bool m_invokedByHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
