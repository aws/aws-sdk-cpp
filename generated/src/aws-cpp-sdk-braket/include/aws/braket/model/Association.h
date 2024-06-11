/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/AssociationType.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>The Amazon Braket resource and the association type.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/Association">AWS
   * API Reference</a></p>
   */
  class Association
  {
  public:
    AWS_BRAKET_API Association();
    AWS_BRAKET_API Association(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Association& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Braket resource arn.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Association& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Association& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Association& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association type for the specified Amazon Braket resource arn.</p>
     */
    inline const AssociationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AssociationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AssociationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Association& WithType(const AssociationType& value) { SetType(value); return *this;}
    inline Association& WithType(AssociationType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AssociationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
