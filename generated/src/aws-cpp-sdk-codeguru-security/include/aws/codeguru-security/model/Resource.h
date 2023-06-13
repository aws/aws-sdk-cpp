/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
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
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   * <p>Information about a resource, such as an Amazon S3 bucket or AWS Lambda
   * function, that contains a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_CODEGURUSECURITY_API Resource();
    AWS_CODEGURUSECURITY_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the resource.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the resource.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the resource.</p>
     */
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the resource.</p>
     */
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the resource.</p>
     */
    inline Resource& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The identifier for a section of the resource, such as an AWS Lambda
     * layer.</p>
     */
    inline const Aws::String& GetSubResourceId() const{ return m_subResourceId; }

    /**
     * <p>The identifier for a section of the resource, such as an AWS Lambda
     * layer.</p>
     */
    inline bool SubResourceIdHasBeenSet() const { return m_subResourceIdHasBeenSet; }

    /**
     * <p>The identifier for a section of the resource, such as an AWS Lambda
     * layer.</p>
     */
    inline void SetSubResourceId(const Aws::String& value) { m_subResourceIdHasBeenSet = true; m_subResourceId = value; }

    /**
     * <p>The identifier for a section of the resource, such as an AWS Lambda
     * layer.</p>
     */
    inline void SetSubResourceId(Aws::String&& value) { m_subResourceIdHasBeenSet = true; m_subResourceId = std::move(value); }

    /**
     * <p>The identifier for a section of the resource, such as an AWS Lambda
     * layer.</p>
     */
    inline void SetSubResourceId(const char* value) { m_subResourceIdHasBeenSet = true; m_subResourceId.assign(value); }

    /**
     * <p>The identifier for a section of the resource, such as an AWS Lambda
     * layer.</p>
     */
    inline Resource& WithSubResourceId(const Aws::String& value) { SetSubResourceId(value); return *this;}

    /**
     * <p>The identifier for a section of the resource, such as an AWS Lambda
     * layer.</p>
     */
    inline Resource& WithSubResourceId(Aws::String&& value) { SetSubResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a section of the resource, such as an AWS Lambda
     * layer.</p>
     */
    inline Resource& WithSubResourceId(const char* value) { SetSubResourceId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_subResourceId;
    bool m_subResourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
