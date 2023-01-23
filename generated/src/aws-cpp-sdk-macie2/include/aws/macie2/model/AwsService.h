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
    AWS_MACIE2_API AwsService();
    AWS_MACIE2_API AwsService(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API AwsService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon Web Service that performed the action.</p>
     */
    inline const Aws::String& GetInvokedBy() const{ return m_invokedBy; }

    /**
     * <p>The name of the Amazon Web Service that performed the action.</p>
     */
    inline bool InvokedByHasBeenSet() const { return m_invokedByHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Service that performed the action.</p>
     */
    inline void SetInvokedBy(const Aws::String& value) { m_invokedByHasBeenSet = true; m_invokedBy = value; }

    /**
     * <p>The name of the Amazon Web Service that performed the action.</p>
     */
    inline void SetInvokedBy(Aws::String&& value) { m_invokedByHasBeenSet = true; m_invokedBy = std::move(value); }

    /**
     * <p>The name of the Amazon Web Service that performed the action.</p>
     */
    inline void SetInvokedBy(const char* value) { m_invokedByHasBeenSet = true; m_invokedBy.assign(value); }

    /**
     * <p>The name of the Amazon Web Service that performed the action.</p>
     */
    inline AwsService& WithInvokedBy(const Aws::String& value) { SetInvokedBy(value); return *this;}

    /**
     * <p>The name of the Amazon Web Service that performed the action.</p>
     */
    inline AwsService& WithInvokedBy(Aws::String&& value) { SetInvokedBy(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Web Service that performed the action.</p>
     */
    inline AwsService& WithInvokedBy(const char* value) { SetInvokedBy(value); return *this;}

  private:

    Aws::String m_invokedBy;
    bool m_invokedByHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
