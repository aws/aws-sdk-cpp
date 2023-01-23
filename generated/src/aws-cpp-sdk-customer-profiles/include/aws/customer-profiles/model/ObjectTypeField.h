/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/FieldContentType.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Represents a field in a ProfileObjectType.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ObjectTypeField">AWS
   * API Reference</a></p>
   */
  class ObjectTypeField
  {
  public:
    AWS_CUSTOMERPROFILES_API ObjectTypeField();
    AWS_CUSTOMERPROFILES_API ObjectTypeField(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ObjectTypeField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A field of a ProfileObject. For example: _source.FirstName, where “_source”
     * is a ProfileObjectType of a Zendesk user and “FirstName” is a field in that
     * ObjectType.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>A field of a ProfileObject. For example: _source.FirstName, where “_source”
     * is a ProfileObjectType of a Zendesk user and “FirstName” is a field in that
     * ObjectType.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>A field of a ProfileObject. For example: _source.FirstName, where “_source”
     * is a ProfileObjectType of a Zendesk user and “FirstName” is a field in that
     * ObjectType.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>A field of a ProfileObject. For example: _source.FirstName, where “_source”
     * is a ProfileObjectType of a Zendesk user and “FirstName” is a field in that
     * ObjectType.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>A field of a ProfileObject. For example: _source.FirstName, where “_source”
     * is a ProfileObjectType of a Zendesk user and “FirstName” is a field in that
     * ObjectType.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>A field of a ProfileObject. For example: _source.FirstName, where “_source”
     * is a ProfileObjectType of a Zendesk user and “FirstName” is a field in that
     * ObjectType.</p>
     */
    inline ObjectTypeField& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>A field of a ProfileObject. For example: _source.FirstName, where “_source”
     * is a ProfileObjectType of a Zendesk user and “FirstName” is a field in that
     * ObjectType.</p>
     */
    inline ObjectTypeField& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>A field of a ProfileObject. For example: _source.FirstName, where “_source”
     * is a ProfileObjectType of a Zendesk user and “FirstName” is a field in that
     * ObjectType.</p>
     */
    inline ObjectTypeField& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The location of the data in the standard ProfileObject model. For example:
     * _profile.Address.PostalCode.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The location of the data in the standard ProfileObject model. For example:
     * _profile.Address.PostalCode.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The location of the data in the standard ProfileObject model. For example:
     * _profile.Address.PostalCode.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The location of the data in the standard ProfileObject model. For example:
     * _profile.Address.PostalCode.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The location of the data in the standard ProfileObject model. For example:
     * _profile.Address.PostalCode.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The location of the data in the standard ProfileObject model. For example:
     * _profile.Address.PostalCode.</p>
     */
    inline ObjectTypeField& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The location of the data in the standard ProfileObject model. For example:
     * _profile.Address.PostalCode.</p>
     */
    inline ObjectTypeField& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The location of the data in the standard ProfileObject model. For example:
     * _profile.Address.PostalCode.</p>
     */
    inline ObjectTypeField& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The content type of the field. Used for determining equality when
     * searching.</p>
     */
    inline const FieldContentType& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type of the field. Used for determining equality when
     * searching.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The content type of the field. Used for determining equality when
     * searching.</p>
     */
    inline void SetContentType(const FieldContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The content type of the field. Used for determining equality when
     * searching.</p>
     */
    inline void SetContentType(FieldContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The content type of the field. Used for determining equality when
     * searching.</p>
     */
    inline ObjectTypeField& WithContentType(const FieldContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type of the field. Used for determining equality when
     * searching.</p>
     */
    inline ObjectTypeField& WithContentType(FieldContentType&& value) { SetContentType(std::move(value)); return *this;}

  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    FieldContentType m_contentType;
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
