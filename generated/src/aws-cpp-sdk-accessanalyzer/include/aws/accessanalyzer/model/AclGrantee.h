/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>You specify each grantee as a type-value pair using one of these types. You
   * can specify only one type of grantee. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAcl.html">PutBucketAcl</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/AclGrantee">AWS
   * API Reference</a></p>
   */
  class AclGrantee
  {
  public:
    AWS_ACCESSANALYZER_API AclGrantee();
    AWS_ACCESSANALYZER_API AclGrantee(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API AclGrantee& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value specified is the canonical user ID of an Amazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The value specified is the canonical user ID of an Amazon Web Services
     * account.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The value specified is the canonical user ID of an Amazon Web Services
     * account.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The value specified is the canonical user ID of an Amazon Web Services
     * account.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The value specified is the canonical user ID of an Amazon Web Services
     * account.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The value specified is the canonical user ID of an Amazon Web Services
     * account.</p>
     */
    inline AclGrantee& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The value specified is the canonical user ID of an Amazon Web Services
     * account.</p>
     */
    inline AclGrantee& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The value specified is the canonical user ID of an Amazon Web Services
     * account.</p>
     */
    inline AclGrantee& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Used for granting permissions to a predefined group.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>Used for granting permissions to a predefined group.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>Used for granting permissions to a predefined group.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>Used for granting permissions to a predefined group.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>Used for granting permissions to a predefined group.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>Used for granting permissions to a predefined group.</p>
     */
    inline AclGrantee& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>Used for granting permissions to a predefined group.</p>
     */
    inline AclGrantee& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>Used for granting permissions to a predefined group.</p>
     */
    inline AclGrantee& WithUri(const char* value) { SetUri(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
