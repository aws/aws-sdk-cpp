/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace QLDBSession
{
namespace Model
{

  /**
   * <p>A structure that can contain a value in multiple encoding
   * formats.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/ValueHolder">AWS
   * API Reference</a></p>
   */
  class ValueHolder
  {
  public:
    AWS_QLDBSESSION_API ValueHolder();
    AWS_QLDBSESSION_API ValueHolder(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API ValueHolder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon Ion binary value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetIonBinary() const{ return m_ionBinary; }

    /**
     * <p>An Amazon Ion binary value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline bool IonBinaryHasBeenSet() const { return m_ionBinaryHasBeenSet; }

    /**
     * <p>An Amazon Ion binary value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline void SetIonBinary(const Aws::Utils::ByteBuffer& value) { m_ionBinaryHasBeenSet = true; m_ionBinary = value; }

    /**
     * <p>An Amazon Ion binary value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline void SetIonBinary(Aws::Utils::ByteBuffer&& value) { m_ionBinaryHasBeenSet = true; m_ionBinary = std::move(value); }

    /**
     * <p>An Amazon Ion binary value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline ValueHolder& WithIonBinary(const Aws::Utils::ByteBuffer& value) { SetIonBinary(value); return *this;}

    /**
     * <p>An Amazon Ion binary value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline ValueHolder& WithIonBinary(Aws::Utils::ByteBuffer&& value) { SetIonBinary(std::move(value)); return *this;}


    /**
     * <p>An Amazon Ion plaintext value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline const Aws::String& GetIonText() const{ return m_ionText; }

    /**
     * <p>An Amazon Ion plaintext value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline bool IonTextHasBeenSet() const { return m_ionTextHasBeenSet; }

    /**
     * <p>An Amazon Ion plaintext value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline void SetIonText(const Aws::String& value) { m_ionTextHasBeenSet = true; m_ionText = value; }

    /**
     * <p>An Amazon Ion plaintext value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline void SetIonText(Aws::String&& value) { m_ionTextHasBeenSet = true; m_ionText = std::move(value); }

    /**
     * <p>An Amazon Ion plaintext value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline void SetIonText(const char* value) { m_ionTextHasBeenSet = true; m_ionText.assign(value); }

    /**
     * <p>An Amazon Ion plaintext value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline ValueHolder& WithIonText(const Aws::String& value) { SetIonText(value); return *this;}

    /**
     * <p>An Amazon Ion plaintext value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline ValueHolder& WithIonText(Aws::String&& value) { SetIonText(std::move(value)); return *this;}

    /**
     * <p>An Amazon Ion plaintext value contained in a <code>ValueHolder</code>
     * structure.</p>
     */
    inline ValueHolder& WithIonText(const char* value) { SetIonText(value); return *this;}

  private:

    Aws::Utils::ByteBuffer m_ionBinary;
    bool m_ionBinaryHasBeenSet = false;

    Aws::String m_ionText;
    bool m_ionTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
