/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The details of a user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/Identity">AWS API
   * Reference</a></p>
   */
  class Identity
  {
  public:
    AWS_CHIME_API Identity();
    AWS_CHIME_API Identity(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Identity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN in an Identity.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN in an Identity.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN in an Identity.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN in an Identity.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN in an Identity.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN in an Identity.</p>
     */
    inline Identity& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN in an Identity.</p>
     */
    inline Identity& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN in an Identity.</p>
     */
    inline Identity& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name in an Identity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name in an Identity.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name in an Identity.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name in an Identity.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name in an Identity.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name in an Identity.</p>
     */
    inline Identity& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name in an Identity.</p>
     */
    inline Identity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name in an Identity.</p>
     */
    inline Identity& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
