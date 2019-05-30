/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Kafka
{
namespace Model
{

  /**
   */
  class AWS_KAFKA_API UntagResourceRequest : public KafkaRequest
  {
  public:
    UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * resource that's associated with the tags.</p>
         
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * resource that's associated with the tags.</p>
         
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * resource that's associated with the tags.</p>
         
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * resource that's associated with the tags.</p>
         
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * resource that's associated with the tags.</p>
         
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * resource that's associated with the tags.</p>
         
     */
    inline UntagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * resource that's associated with the tags.</p>
         
     */
    inline UntagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the
     * resource that's associated with the tags.</p>
         
     */
    inline UntagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * 
            <p>Tag keys must be unique for a given cluster. In addition, the
     * following restrictions apply:</p>
            <ul>
               <li>
         
     * <p>Each tag key must be unique. If you add a tag with a key that's already in
  
     * use, your new tag overwrites the existing key-value pair. </p>
              
     * </li>
               <li>
                  <p>You can't start a tag key with
     * aws: because this prefix is reserved for use
                  by  AWS.  AWS
     * creates tags that begin with this prefix on your behalf, but
                 
     * you can't edit or delete them.</p>
               </li>
               <li>
    
     * <p>Tag keys must be between 1 and 128 Unicode characters in length.</p>
        
     * </li>
               <li>
                  <p>Tag keys must consist of the
     * following characters: Unicode letters, digits,
                  white space,
     * and the following special characters: _ . / = + -
                     @.</p>
  
     *             </li>
            </ul>
         
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * 
            <p>Tag keys must be unique for a given cluster. In addition, the
     * following restrictions apply:</p>
            <ul>
               <li>
         
     * <p>Each tag key must be unique. If you add a tag with a key that's already in
  
     * use, your new tag overwrites the existing key-value pair. </p>
              
     * </li>
               <li>
                  <p>You can't start a tag key with
     * aws: because this prefix is reserved for use
                  by  AWS.  AWS
     * creates tags that begin with this prefix on your behalf, but
                 
     * you can't edit or delete them.</p>
               </li>
               <li>
    
     * <p>Tag keys must be between 1 and 128 Unicode characters in length.</p>
        
     * </li>
               <li>
                  <p>Tag keys must consist of the
     * following characters: Unicode letters, digits,
                  white space,
     * and the following special characters: _ . / = + -
                     @.</p>
  
     *             </li>
            </ul>
         
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * 
            <p>Tag keys must be unique for a given cluster. In addition, the
     * following restrictions apply:</p>
            <ul>
               <li>
         
     * <p>Each tag key must be unique. If you add a tag with a key that's already in
  
     * use, your new tag overwrites the existing key-value pair. </p>
              
     * </li>
               <li>
                  <p>You can't start a tag key with
     * aws: because this prefix is reserved for use
                  by  AWS.  AWS
     * creates tags that begin with this prefix on your behalf, but
                 
     * you can't edit or delete them.</p>
               </li>
               <li>
    
     * <p>Tag keys must be between 1 and 128 Unicode characters in length.</p>
        
     * </li>
               <li>
                  <p>Tag keys must consist of the
     * following characters: Unicode letters, digits,
                  white space,
     * and the following special characters: _ . / = + -
                     @.</p>
  
     *             </li>
            </ul>
         
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * 
            <p>Tag keys must be unique for a given cluster. In addition, the
     * following restrictions apply:</p>
            <ul>
               <li>
         
     * <p>Each tag key must be unique. If you add a tag with a key that's already in
  
     * use, your new tag overwrites the existing key-value pair. </p>
              
     * </li>
               <li>
                  <p>You can't start a tag key with
     * aws: because this prefix is reserved for use
                  by  AWS.  AWS
     * creates tags that begin with this prefix on your behalf, but
                 
     * you can't edit or delete them.</p>
               </li>
               <li>
    
     * <p>Tag keys must be between 1 and 128 Unicode characters in length.</p>
        
     * </li>
               <li>
                  <p>Tag keys must consist of the
     * following characters: Unicode letters, digits,
                  white space,
     * and the following special characters: _ . / = + -
                     @.</p>
  
     *             </li>
            </ul>
         
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * 
            <p>Tag keys must be unique for a given cluster. In addition, the
     * following restrictions apply:</p>
            <ul>
               <li>
         
     * <p>Each tag key must be unique. If you add a tag with a key that's already in
  
     * use, your new tag overwrites the existing key-value pair. </p>
              
     * </li>
               <li>
                  <p>You can't start a tag key with
     * aws: because this prefix is reserved for use
                  by  AWS.  AWS
     * creates tags that begin with this prefix on your behalf, but
                 
     * you can't edit or delete them.</p>
               </li>
               <li>
    
     * <p>Tag keys must be between 1 and 128 Unicode characters in length.</p>
        
     * </li>
               <li>
                  <p>Tag keys must consist of the
     * following characters: Unicode letters, digits,
                  white space,
     * and the following special characters: _ . / = + -
                     @.</p>
  
     *             </li>
            </ul>
         
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * 
            <p>Tag keys must be unique for a given cluster. In addition, the
     * following restrictions apply:</p>
            <ul>
               <li>
         
     * <p>Each tag key must be unique. If you add a tag with a key that's already in
  
     * use, your new tag overwrites the existing key-value pair. </p>
              
     * </li>
               <li>
                  <p>You can't start a tag key with
     * aws: because this prefix is reserved for use
                  by  AWS.  AWS
     * creates tags that begin with this prefix on your behalf, but
                 
     * you can't edit or delete them.</p>
               </li>
               <li>
    
     * <p>Tag keys must be between 1 and 128 Unicode characters in length.</p>
        
     * </li>
               <li>
                  <p>Tag keys must consist of the
     * following characters: Unicode letters, digits,
                  white space,
     * and the following special characters: _ . / = + -
                     @.</p>
  
     *             </li>
            </ul>
         
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * 
            <p>Tag keys must be unique for a given cluster. In addition, the
     * following restrictions apply:</p>
            <ul>
               <li>
         
     * <p>Each tag key must be unique. If you add a tag with a key that's already in
  
     * use, your new tag overwrites the existing key-value pair. </p>
              
     * </li>
               <li>
                  <p>You can't start a tag key with
     * aws: because this prefix is reserved for use
                  by  AWS.  AWS
     * creates tags that begin with this prefix on your behalf, but
                 
     * you can't edit or delete them.</p>
               </li>
               <li>
    
     * <p>Tag keys must be between 1 and 128 Unicode characters in length.</p>
        
     * </li>
               <li>
                  <p>Tag keys must consist of the
     * following characters: Unicode letters, digits,
                  white space,
     * and the following special characters: _ . / = + -
                     @.</p>
  
     *             </li>
            </ul>
         
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * 
            <p>Tag keys must be unique for a given cluster. In addition, the
     * following restrictions apply:</p>
            <ul>
               <li>
         
     * <p>Each tag key must be unique. If you add a tag with a key that's already in
  
     * use, your new tag overwrites the existing key-value pair. </p>
              
     * </li>
               <li>
                  <p>You can't start a tag key with
     * aws: because this prefix is reserved for use
                  by  AWS.  AWS
     * creates tags that begin with this prefix on your behalf, but
                 
     * you can't edit or delete them.</p>
               </li>
               <li>
    
     * <p>Tag keys must be between 1 and 128 Unicode characters in length.</p>
        
     * </li>
               <li>
                  <p>Tag keys must consist of the
     * following characters: Unicode letters, digits,
                  white space,
     * and the following special characters: _ . / = + -
                     @.</p>
  
     *             </li>
            </ul>
         
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * 
            <p>Tag keys must be unique for a given cluster. In addition, the
     * following restrictions apply:</p>
            <ul>
               <li>
         
     * <p>Each tag key must be unique. If you add a tag with a key that's already in
  
     * use, your new tag overwrites the existing key-value pair. </p>
              
     * </li>
               <li>
                  <p>You can't start a tag key with
     * aws: because this prefix is reserved for use
                  by  AWS.  AWS
     * creates tags that begin with this prefix on your behalf, but
                 
     * you can't edit or delete them.</p>
               </li>
               <li>
    
     * <p>Tag keys must be between 1 and 128 Unicode characters in length.</p>
        
     * </li>
               <li>
                  <p>Tag keys must consist of the
     * following characters: Unicode letters, digits,
                  white space,
     * and the following special characters: _ . / = + -
                     @.</p>
  
     *             </li>
            </ul>
         
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
