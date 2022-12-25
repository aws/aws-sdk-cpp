/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MemberType.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The name of the attribute, which is one of the values defined in the
   * UserAttribute enumeration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/Delegate">AWS
   * API Reference</a></p>
   */
  class Delegate
  {
  public:
    AWS_WORKMAIL_API Delegate();
    AWS_WORKMAIL_API Delegate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Delegate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline Delegate& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline Delegate& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline Delegate& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of the delegate: user or group.</p>
     */
    inline const MemberType& GetType() const{ return m_type; }

    /**
     * <p>The type of the delegate: user or group.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the delegate: user or group.</p>
     */
    inline void SetType(const MemberType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the delegate: user or group.</p>
     */
    inline void SetType(MemberType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the delegate: user or group.</p>
     */
    inline Delegate& WithType(const MemberType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the delegate: user or group.</p>
     */
    inline Delegate& WithType(MemberType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MemberType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
