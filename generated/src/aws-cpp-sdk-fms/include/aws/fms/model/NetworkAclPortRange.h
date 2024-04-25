/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>

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
namespace FMS
{
namespace Model
{

  /**
   * <p>TCP or UDP protocols: The range of ports the rule applies to.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkAclPortRange">AWS
   * API Reference</a></p>
   */
  class NetworkAclPortRange
  {
  public:
    AWS_FMS_API NetworkAclPortRange();
    AWS_FMS_API NetworkAclPortRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkAclPortRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The beginning port number of the range. </p>
     */
    inline int GetFrom() const{ return m_from; }

    /**
     * <p>The beginning port number of the range. </p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The beginning port number of the range. </p>
     */
    inline void SetFrom(int value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The beginning port number of the range. </p>
     */
    inline NetworkAclPortRange& WithFrom(int value) { SetFrom(value); return *this;}


    /**
     * <p>The ending port number of the range. </p>
     */
    inline int GetTo() const{ return m_to; }

    /**
     * <p>The ending port number of the range. </p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p>The ending port number of the range. </p>
     */
    inline void SetTo(int value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>The ending port number of the range. </p>
     */
    inline NetworkAclPortRange& WithTo(int value) { SetTo(value); return *this;}

  private:

    int m_from;
    bool m_fromHasBeenSet = false;

    int m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
