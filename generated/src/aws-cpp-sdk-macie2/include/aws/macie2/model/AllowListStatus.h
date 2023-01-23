/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/AllowListStatusCode.h>
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
   * <p>Provides information about the current status of an allow list, which
   * indicates whether Amazon Macie can access and use the list's
   * criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AllowListStatus">AWS
   * API Reference</a></p>
   */
  class AllowListStatus
  {
  public:
    AWS_MACIE2_API AllowListStatus();
    AWS_MACIE2_API AllowListStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API AllowListStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status of the allow list. If the list's criteria specify a
     * regular expression (regex), this value is typically OK. Amazon Macie can compile
     * the expression.</p> <p>If the list's criteria specify an S3 object, possible
     * values are:</p> <ul><li><p>OK - Macie can retrieve and parse the contents of the
     * object.</p></li> <li><p>S3_OBJECT_ACCESS_DENIED - Macie isn't allowed to access
     * the object or the object is encrypted with a customer managed KMS key that Macie
     * isn't allowed to use. Check the bucket policy and other permissions settings for
     * the bucket and the object. If the object is encrypted, also ensure that it's
     * encrypted with a key that Macie is allowed to use.</p></li>
     * <li><p>S3_OBJECT_EMPTY - Macie can retrieve the object but the object doesn't
     * contain any content. Ensure that the object contains the correct entries. Also
     * ensure that the list's criteria specify the correct bucket and object
     * names.</p></li> <li><p>S3_OBJECT_NOT_FOUND - The object doesn't exist in Amazon
     * S3. Ensure that the list's criteria specify the correct bucket and object
     * names.</p></li> <li><p>S3_OBJECT_OVERSIZE - Macie can retrieve the object.
     * However, the object contains too many entries or its storage size exceeds the
     * quota for an allow list. Try breaking the list into multiple files and ensure
     * that each file doesn't exceed any quotas. Then configure list settings in Macie
     * for each file.</p></li> <li><p>S3_THROTTLED - Amazon S3 throttled the request to
     * retrieve the object. Wait a few minutes and then try again.</p></li>
     * <li><p>S3_USER_ACCESS_DENIED - Amazon S3 denied the request to retrieve the
     * object. If the specified object exists, you're not allowed to access it or it's
     * encrypted with an KMS key that you're not allowed to use. Work with your Amazon
     * Web Services administrator to ensure that the list's criteria specify the
     * correct bucket and object names, and you have read access to the bucket and the
     * object. If the object is encrypted, also ensure that it's encrypted with a key
     * that you're allowed to use.</p></li> <li><p>UNKNOWN_ERROR - A transient or
     * internal error occurred when Macie attempted to retrieve or parse the object.
     * Wait a few minutes and then try again. A list can also have this status if it's
     * encrypted with a key that Amazon S3 and Macie can't access or use.</p></li></ul>
     */
    inline const AllowListStatusCode& GetCode() const{ return m_code; }

    /**
     * <p>The current status of the allow list. If the list's criteria specify a
     * regular expression (regex), this value is typically OK. Amazon Macie can compile
     * the expression.</p> <p>If the list's criteria specify an S3 object, possible
     * values are:</p> <ul><li><p>OK - Macie can retrieve and parse the contents of the
     * object.</p></li> <li><p>S3_OBJECT_ACCESS_DENIED - Macie isn't allowed to access
     * the object or the object is encrypted with a customer managed KMS key that Macie
     * isn't allowed to use. Check the bucket policy and other permissions settings for
     * the bucket and the object. If the object is encrypted, also ensure that it's
     * encrypted with a key that Macie is allowed to use.</p></li>
     * <li><p>S3_OBJECT_EMPTY - Macie can retrieve the object but the object doesn't
     * contain any content. Ensure that the object contains the correct entries. Also
     * ensure that the list's criteria specify the correct bucket and object
     * names.</p></li> <li><p>S3_OBJECT_NOT_FOUND - The object doesn't exist in Amazon
     * S3. Ensure that the list's criteria specify the correct bucket and object
     * names.</p></li> <li><p>S3_OBJECT_OVERSIZE - Macie can retrieve the object.
     * However, the object contains too many entries or its storage size exceeds the
     * quota for an allow list. Try breaking the list into multiple files and ensure
     * that each file doesn't exceed any quotas. Then configure list settings in Macie
     * for each file.</p></li> <li><p>S3_THROTTLED - Amazon S3 throttled the request to
     * retrieve the object. Wait a few minutes and then try again.</p></li>
     * <li><p>S3_USER_ACCESS_DENIED - Amazon S3 denied the request to retrieve the
     * object. If the specified object exists, you're not allowed to access it or it's
     * encrypted with an KMS key that you're not allowed to use. Work with your Amazon
     * Web Services administrator to ensure that the list's criteria specify the
     * correct bucket and object names, and you have read access to the bucket and the
     * object. If the object is encrypted, also ensure that it's encrypted with a key
     * that you're allowed to use.</p></li> <li><p>UNKNOWN_ERROR - A transient or
     * internal error occurred when Macie attempted to retrieve or parse the object.
     * Wait a few minutes and then try again. A list can also have this status if it's
     * encrypted with a key that Amazon S3 and Macie can't access or use.</p></li></ul>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The current status of the allow list. If the list's criteria specify a
     * regular expression (regex), this value is typically OK. Amazon Macie can compile
     * the expression.</p> <p>If the list's criteria specify an S3 object, possible
     * values are:</p> <ul><li><p>OK - Macie can retrieve and parse the contents of the
     * object.</p></li> <li><p>S3_OBJECT_ACCESS_DENIED - Macie isn't allowed to access
     * the object or the object is encrypted with a customer managed KMS key that Macie
     * isn't allowed to use. Check the bucket policy and other permissions settings for
     * the bucket and the object. If the object is encrypted, also ensure that it's
     * encrypted with a key that Macie is allowed to use.</p></li>
     * <li><p>S3_OBJECT_EMPTY - Macie can retrieve the object but the object doesn't
     * contain any content. Ensure that the object contains the correct entries. Also
     * ensure that the list's criteria specify the correct bucket and object
     * names.</p></li> <li><p>S3_OBJECT_NOT_FOUND - The object doesn't exist in Amazon
     * S3. Ensure that the list's criteria specify the correct bucket and object
     * names.</p></li> <li><p>S3_OBJECT_OVERSIZE - Macie can retrieve the object.
     * However, the object contains too many entries or its storage size exceeds the
     * quota for an allow list. Try breaking the list into multiple files and ensure
     * that each file doesn't exceed any quotas. Then configure list settings in Macie
     * for each file.</p></li> <li><p>S3_THROTTLED - Amazon S3 throttled the request to
     * retrieve the object. Wait a few minutes and then try again.</p></li>
     * <li><p>S3_USER_ACCESS_DENIED - Amazon S3 denied the request to retrieve the
     * object. If the specified object exists, you're not allowed to access it or it's
     * encrypted with an KMS key that you're not allowed to use. Work with your Amazon
     * Web Services administrator to ensure that the list's criteria specify the
     * correct bucket and object names, and you have read access to the bucket and the
     * object. If the object is encrypted, also ensure that it's encrypted with a key
     * that you're allowed to use.</p></li> <li><p>UNKNOWN_ERROR - A transient or
     * internal error occurred when Macie attempted to retrieve or parse the object.
     * Wait a few minutes and then try again. A list can also have this status if it's
     * encrypted with a key that Amazon S3 and Macie can't access or use.</p></li></ul>
     */
    inline void SetCode(const AllowListStatusCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The current status of the allow list. If the list's criteria specify a
     * regular expression (regex), this value is typically OK. Amazon Macie can compile
     * the expression.</p> <p>If the list's criteria specify an S3 object, possible
     * values are:</p> <ul><li><p>OK - Macie can retrieve and parse the contents of the
     * object.</p></li> <li><p>S3_OBJECT_ACCESS_DENIED - Macie isn't allowed to access
     * the object or the object is encrypted with a customer managed KMS key that Macie
     * isn't allowed to use. Check the bucket policy and other permissions settings for
     * the bucket and the object. If the object is encrypted, also ensure that it's
     * encrypted with a key that Macie is allowed to use.</p></li>
     * <li><p>S3_OBJECT_EMPTY - Macie can retrieve the object but the object doesn't
     * contain any content. Ensure that the object contains the correct entries. Also
     * ensure that the list's criteria specify the correct bucket and object
     * names.</p></li> <li><p>S3_OBJECT_NOT_FOUND - The object doesn't exist in Amazon
     * S3. Ensure that the list's criteria specify the correct bucket and object
     * names.</p></li> <li><p>S3_OBJECT_OVERSIZE - Macie can retrieve the object.
     * However, the object contains too many entries or its storage size exceeds the
     * quota for an allow list. Try breaking the list into multiple files and ensure
     * that each file doesn't exceed any quotas. Then configure list settings in Macie
     * for each file.</p></li> <li><p>S3_THROTTLED - Amazon S3 throttled the request to
     * retrieve the object. Wait a few minutes and then try again.</p></li>
     * <li><p>S3_USER_ACCESS_DENIED - Amazon S3 denied the request to retrieve the
     * object. If the specified object exists, you're not allowed to access it or it's
     * encrypted with an KMS key that you're not allowed to use. Work with your Amazon
     * Web Services administrator to ensure that the list's criteria specify the
     * correct bucket and object names, and you have read access to the bucket and the
     * object. If the object is encrypted, also ensure that it's encrypted with a key
     * that you're allowed to use.</p></li> <li><p>UNKNOWN_ERROR - A transient or
     * internal error occurred when Macie attempted to retrieve or parse the object.
     * Wait a few minutes and then try again. A list can also have this status if it's
     * encrypted with a key that Amazon S3 and Macie can't access or use.</p></li></ul>
     */
    inline void SetCode(AllowListStatusCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The current status of the allow list. If the list's criteria specify a
     * regular expression (regex), this value is typically OK. Amazon Macie can compile
     * the expression.</p> <p>If the list's criteria specify an S3 object, possible
     * values are:</p> <ul><li><p>OK - Macie can retrieve and parse the contents of the
     * object.</p></li> <li><p>S3_OBJECT_ACCESS_DENIED - Macie isn't allowed to access
     * the object or the object is encrypted with a customer managed KMS key that Macie
     * isn't allowed to use. Check the bucket policy and other permissions settings for
     * the bucket and the object. If the object is encrypted, also ensure that it's
     * encrypted with a key that Macie is allowed to use.</p></li>
     * <li><p>S3_OBJECT_EMPTY - Macie can retrieve the object but the object doesn't
     * contain any content. Ensure that the object contains the correct entries. Also
     * ensure that the list's criteria specify the correct bucket and object
     * names.</p></li> <li><p>S3_OBJECT_NOT_FOUND - The object doesn't exist in Amazon
     * S3. Ensure that the list's criteria specify the correct bucket and object
     * names.</p></li> <li><p>S3_OBJECT_OVERSIZE - Macie can retrieve the object.
     * However, the object contains too many entries or its storage size exceeds the
     * quota for an allow list. Try breaking the list into multiple files and ensure
     * that each file doesn't exceed any quotas. Then configure list settings in Macie
     * for each file.</p></li> <li><p>S3_THROTTLED - Amazon S3 throttled the request to
     * retrieve the object. Wait a few minutes and then try again.</p></li>
     * <li><p>S3_USER_ACCESS_DENIED - Amazon S3 denied the request to retrieve the
     * object. If the specified object exists, you're not allowed to access it or it's
     * encrypted with an KMS key that you're not allowed to use. Work with your Amazon
     * Web Services administrator to ensure that the list's criteria specify the
     * correct bucket and object names, and you have read access to the bucket and the
     * object. If the object is encrypted, also ensure that it's encrypted with a key
     * that you're allowed to use.</p></li> <li><p>UNKNOWN_ERROR - A transient or
     * internal error occurred when Macie attempted to retrieve or parse the object.
     * Wait a few minutes and then try again. A list can also have this status if it's
     * encrypted with a key that Amazon S3 and Macie can't access or use.</p></li></ul>
     */
    inline AllowListStatus& WithCode(const AllowListStatusCode& value) { SetCode(value); return *this;}

    /**
     * <p>The current status of the allow list. If the list's criteria specify a
     * regular expression (regex), this value is typically OK. Amazon Macie can compile
     * the expression.</p> <p>If the list's criteria specify an S3 object, possible
     * values are:</p> <ul><li><p>OK - Macie can retrieve and parse the contents of the
     * object.</p></li> <li><p>S3_OBJECT_ACCESS_DENIED - Macie isn't allowed to access
     * the object or the object is encrypted with a customer managed KMS key that Macie
     * isn't allowed to use. Check the bucket policy and other permissions settings for
     * the bucket and the object. If the object is encrypted, also ensure that it's
     * encrypted with a key that Macie is allowed to use.</p></li>
     * <li><p>S3_OBJECT_EMPTY - Macie can retrieve the object but the object doesn't
     * contain any content. Ensure that the object contains the correct entries. Also
     * ensure that the list's criteria specify the correct bucket and object
     * names.</p></li> <li><p>S3_OBJECT_NOT_FOUND - The object doesn't exist in Amazon
     * S3. Ensure that the list's criteria specify the correct bucket and object
     * names.</p></li> <li><p>S3_OBJECT_OVERSIZE - Macie can retrieve the object.
     * However, the object contains too many entries or its storage size exceeds the
     * quota for an allow list. Try breaking the list into multiple files and ensure
     * that each file doesn't exceed any quotas. Then configure list settings in Macie
     * for each file.</p></li> <li><p>S3_THROTTLED - Amazon S3 throttled the request to
     * retrieve the object. Wait a few minutes and then try again.</p></li>
     * <li><p>S3_USER_ACCESS_DENIED - Amazon S3 denied the request to retrieve the
     * object. If the specified object exists, you're not allowed to access it or it's
     * encrypted with an KMS key that you're not allowed to use. Work with your Amazon
     * Web Services administrator to ensure that the list's criteria specify the
     * correct bucket and object names, and you have read access to the bucket and the
     * object. If the object is encrypted, also ensure that it's encrypted with a key
     * that you're allowed to use.</p></li> <li><p>UNKNOWN_ERROR - A transient or
     * internal error occurred when Macie attempted to retrieve or parse the object.
     * Wait a few minutes and then try again. A list can also have this status if it's
     * encrypted with a key that Amazon S3 and Macie can't access or use.</p></li></ul>
     */
    inline AllowListStatus& WithCode(AllowListStatusCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>A brief description of the status of the allow list. Amazon Macie uses this
     * value to provide additional information about an error that occurred when Macie
     * tried to access and use the list's criteria.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the status of the allow list. Amazon Macie uses this
     * value to provide additional information about an error that occurred when Macie
     * tried to access and use the list's criteria.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description of the status of the allow list. Amazon Macie uses this
     * value to provide additional information about an error that occurred when Macie
     * tried to access and use the list's criteria.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of the status of the allow list. Amazon Macie uses this
     * value to provide additional information about an error that occurred when Macie
     * tried to access and use the list's criteria.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of the status of the allow list. Amazon Macie uses this
     * value to provide additional information about an error that occurred when Macie
     * tried to access and use the list's criteria.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of the status of the allow list. Amazon Macie uses this
     * value to provide additional information about an error that occurred when Macie
     * tried to access and use the list's criteria.</p>
     */
    inline AllowListStatus& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the status of the allow list. Amazon Macie uses this
     * value to provide additional information about an error that occurred when Macie
     * tried to access and use the list's criteria.</p>
     */
    inline AllowListStatus& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the status of the allow list. Amazon Macie uses this
     * value to provide additional information about an error that occurred when Macie
     * tried to access and use the list's criteria.</p>
     */
    inline AllowListStatus& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    AllowListStatusCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
